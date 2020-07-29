#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "porthandler.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#define DEFAULT_SPEED 115200

QStringList driveTypesList = {"HDLC","Servo","DC","ACH"};
QStringList controlTypesList = {"Ток", "Ток+Сила", "Ток+Сила+Температура", "Таймер"};
QStringList testTypesList = {"Испытание успешно завершено","Идет тестирование", "Пауза", "Остановлен", "Перегрев","Незапланированная саморазборка"};
QVector<int> values(15);
QTimer dataTimer;
QTimer scaleTimer;
QTime dataTime(QTime::currentTime());

Porthandler* handler = new Porthandler(&values);
QThread* handlerThread = new QThread();
QSerialPortInfo portInfo;
QString portName;
int portSpeed = DEFAULT_SPEED;
bool connected = false;
bool logTimestamp = false;
bool logDebug = false;

int timeShake = 0;
int timeCooling = 0;
int forceMinimum = 0;
int tempStop = 0;
int currentStop = 0;
int tensoCalibValue = 0;
int testState = 3;
int currentPlotMax = 500;
int forcePlotMax = 2000;
int shakesTarget = 1000;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(!QDir("logs").exists()){ //проверка на наличие папки с логами
        QDir().mkdir("logs");
    }
    setupGUI();
    connect(this, SIGNAL(startListening()), handler, SLOT(process()));
    connect(handler, SIGNAL(dataGet()), this, SLOT(refreshData()));
    connect(&scaleTimer, SIGNAL(timeout()), this, SLOT(plotScalingSlot()));
    handler->moveToThread(handlerThread);
    handlerThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupGUI(){
    overheat.load("src/fire.png");
    overheatInactive.load("src/fire_inact.png");
    RUD.load("src/gear.png");
    RUDInactive.load("src/gear_inact.png");
    ui->labelOverheat->setPixmap(overheatInactive);
    ui->labelRUD->setPixmap(RUDInactive);

    QPixmap pixmap("src/logo.png");
    ui->labelLogo->setPixmap(pixmap);
    ui->labelLogo->setMask(pixmap.mask());
    ui->labelLogo->show();

    ui->comboBoxDrive->addItems(driveTypesList);
    ui->comboBoxControl->addItems(controlTypesList);
    ui->comboBoxDrive->setCurrentIndex(2);
    ui->comboBoxControl->setCurrentIndex(2);

    for(int i=0; i<portInfo.availablePorts().size();i++){
        ui->comboBoxPort->addItem(portInfo.availablePorts().at(i).portName());
    }

    ui->plotter1->addGraph();
    ui->plotter1->graph(0)->setPen(QPen(QColor("#DD0000")));

    ui->plotter2->addGraph();
    ui->plotter2->graph(0)->setPen(QPen(QColor("#0000AA")));

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->plotter1->xAxis->setTicker(timeTicker);
    ui->plotter1->yAxis->setLabel("Ток, мА");
    ui->plotter1->xAxis->setLabel("Время, с");
    ui->plotter1->yAxis->setRange(0,currentPlotMax);
    ui->plotter1->xAxis->setRange(0, 10);

    ui->plotter2->xAxis->setTicker(timeTicker);
    ui->plotter2->yAxis->setLabel("Усилие, г");
    ui->plotter2->xAxis->setLabel("Время, с");
    ui->plotter2->yAxis->setRange(0,forcePlotMax);
    ui->plotter2->xAxis->setRange(0, 10);

    connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
}

void MainWindow::setupStartup(){
    timeShake = ui->spinBoxTimeShake->value();
    timeCooling = ui->spinBoxTimeCooling->value();
    forceMinimum = ui->spinBoxForceMinimum->value();
    tempStop = ui->spinBoxTempStop->value();
    currentStop = ui->spinBoxCurrentStop->value();
}


void MainWindow::on_pushButtonConnect_clicked(){
    if(connected){
        handler->close();
        connected = false;
        ui->pushButtonConnect->setText("Подключить");
        dataTimer.stop();
        scaleTimer.stop();
    }else{
        portSpeed = DEFAULT_SPEED;
        portName = ui->comboBoxPort->currentText();
        qDebug() << "Name:" << portName << "Speed:" << portSpeed;
        connected = handler->open(portName, portSpeed);
        if(connected){
            ui->pushButtonConnect->setText("Отключить");
            emit startListening();
            dataTimer.start(15);
            setupStartup();
        }
    }
}

void MainWindow::refreshData(){
    ui->labelShakesCount->setNum(values.value(0));
    ui->labelCurrent->setNum(values.value(1));
    ui->labelForce->setNum(values.value(2));
    ui->labelTimeShake->setNum(values.value(3));
    ui->labelTimeCooling->setNum(values.value(4));
    ui->labelCurrentStop->setNum(values.value(5));
    ui->labelForceMinimum->setNum(values.value(6));
    ui->labelTemp->setNum(values.value(7));
    ui->labelTempNom->setNum(values.value(8));
    ui->labelTempStop->setNum(values.value(9));
    ui->labelNoise->setNum(values.value(10));
    ui->labelVoltage->setNum(values.value(11));
    ui->labelCurrentAverage->setNum(values.value(13));
    ui->labelForceMaximum->setNum(values.value(14));

    if(values.value(12)!=testState){
        ui->labelOverheat->setPixmap(overheatInactive);
        ui->labelRUD->setPixmap(RUDInactive);
        if(values.value(12)==4){ //если перегрев
            ui->labelOverheat->setPixmap(overheat);
            ui->labelRUD->setPixmap(RUDInactive);
        }
        if(values.value(12)==5){ //если саморазборка
            ui->labelOverheat->setPixmap(overheatInactive);
            ui->labelRUD->setPixmap(RUD);
        }
    }

    testState = values.value(12);
    ui->labelTestState->setText(testTypesList.value(testState));

    double key = dataTime.elapsed()/1000.0f;
    ui->plotter1->graph(0)->addData(key, values.value(1)); //Ток
    ui->plotter2->graph(0)->addData(key, values.value(2)); //Сила

    if(values.value(1) >= currentPlotMax){
        currentPlotMax = values.value(1);
        ui->plotter1->yAxis->setRange(0,currentPlotMax*1.2f);
        scaleTimer.start(12000);
    }
    if(values.value(2) >= forcePlotMax){
        forcePlotMax = values.value(2);
        ui->plotter2->yAxis->setRange(0,forcePlotMax*1.2f);
        scaleTimer.start(12000);
    }
}

void MainWindow::realtimeDataSlot(){
    double key = dataTime.elapsed()/1000.0f;
    ui->plotter1->xAxis->setRange(key, 10, Qt::AlignRight);
    ui->plotter2->xAxis->setRange(key, 10, Qt::AlignRight);
    ui->plotter1->replot();
    ui->plotter2->replot();
}

void MainWindow::on_pushButtonStart_clicked()
{
    setupStartup();
    handler->commit(QString("1,1,1\n").toUtf8());
}

void MainWindow::on_pushButtonPause_clicked()
{
    handler->commit(QString("1,1,2\n").toUtf8());
}

void MainWindow::on_pushButtonStop_clicked()
{
    handler->commit(QString("1,1,3\n").toUtf8());
}

void MainWindow::on_pushButtonOpen_clicked()
{
    handler->commit(QString("1,6,1\n").toUtf8());
}

void MainWindow::on_pushButtonClose_clicked()
{
    handler->commit(QString("1,6,2\n").toUtf8());
}

void MainWindow::on_spinBoxTimeShake_editingFinished()
{
    int val = ui->spinBoxTimeShake->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,2,"+qstrval+'\n').toUtf8());
    timeShake = val;
}

void MainWindow::on_spinBoxTimeCooling_editingFinished()
{
    int val = ui->spinBoxTimeCooling->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,3,"+qstrval+'\n').toUtf8());
    timeCooling = val;
}

void MainWindow::on_spinBoxForceMinimum_editingFinished()
{
    int val = ui->spinBoxForceMinimum->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,5,"+qstrval+'\n').toUtf8());
    forceMinimum = val;
}

void MainWindow::on_spinBoxCurrentStop_editingFinished()
{
    int val = ui->spinBoxCurrentStop->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,4,"+qstrval+'\n').toUtf8());
    currentStop = val;
}

void MainWindow::on_spinBoxTempStop_editingFinished()
{
    int val = ui->spinBoxTempStop->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,10,"+qstrval+'\n').toUtf8());
    tempStop = val;
}

void MainWindow::on_pushButton_clicked()
{
    tensoCalibValue = ui->spinBoxTensoCalib->value();
    QString qstrval = QString::number(tensoCalibValue);
    handler->commit(QString("1,13,"+qstrval+'\n').toUtf8());
}

void MainWindow::on_checkBoxCurrentSmooth_stateChanged(int arg1)
{
    if(arg1==0){
        handler->commit(QString("1,14,0\n").toUtf8());
    }else{
        handler->commit(QString("1,14,1\n").toUtf8());
    }
}

void MainWindow::on_checkBoxForceSmooth_stateChanged(int arg1)
{
    if(arg1==0){
        handler->commit(QString("1,15,0\n").toUtf8());
    }else{
        handler->commit(QString("1,15,1\n").toUtf8());
    }
}

void MainWindow::plotScalingSlot(){
    scaleTimer.stop();
    currentPlotMax = values.value(1);
    ui->plotter1->yAxis->setRange(0,currentPlotMax*1.2f);
    forcePlotMax = values.value(2);
    ui->plotter2->yAxis->setRange(0,forcePlotMax*1.2f);
}

void MainWindow::on_comboBoxDrive_currentIndexChanged(int index)
{
    handler->commit(QString("1,7,"+QString::number(index+1)+"\n").toUtf8());
}

void MainWindow::on_comboBoxControl_currentIndexChanged(int index)
{
    handler->commit(QString("1,16,"+QString::number(index)+"\n").toUtf8());
}

void MainWindow::on_checkBoxShakesTarget_stateChanged(int arg1)
{
    if(arg1==0){
        handler->commit(QString("1,17,-1\n").toUtf8());
        shakesTarget = -1;
        ui->spinBoxShakesTarget->setEnabled(false);
    }else{
        shakesTarget = ui->spinBoxShakesTarget->value();
        handler->commit(QString("1,17,"+QString::number(shakesTarget)+"\n").toUtf8());
        ui->spinBoxShakesTarget->setEnabled(true);
    }
}

void MainWindow::on_pushButtonRefresh_clicked()
{
    ui->comboBoxPort->clear();
    for(int i=0; i<portInfo.availablePorts().size();i++){
        ui->comboBoxPort->addItem(portInfo.availablePorts().at(i).portName());
    }
}

void MainWindow::on_spinBoxShakesTarget_editingFinished()
{
    shakesTarget = ui->spinBoxShakesTarget->value();
    handler->commit(QString("1,17,"+QString::number(shakesTarget)+"\n").toUtf8());
}

void MainWindow::on_checkBoxLogTimestamp_stateChanged(int arg1)
{
    if(!arg1){
        logTimestamp = false;
    }else{
        logTimestamp = true;
    }
}

void MainWindow::on_checkBoxLogDebug_stateChanged(int arg1)
{
    if(!arg1){
        logDebug = false;
    }else{
        logDebug = true;
    }
}
