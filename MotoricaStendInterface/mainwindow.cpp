#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "porthandler.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#define DEFAULT_SPEED 115200

QStringList driveTypesList = {"DC","Servo","HDLC","ACH"};
QStringList controlTypesList = {"Ток", "Ток+Сила", "Ток+Сила+Температура", "Таймер"};
QVector<int> values(15);
QTimer dataTimer;
QTime dataTime(QTime::currentTime());

Porthandler* handler = new Porthandler(&values);
QThread* handlerThread = new QThread();
QSerialPortInfo portInfo;
QString portName;
int portSpeed = DEFAULT_SPEED;
bool connected = false;

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
    handler->moveToThread(handlerThread);
    handlerThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupGUI(){

    QPixmap pixmap("src/logo.png");
    ui->labelLogo->setPixmap(pixmap);
    ui->labelLogo->setMask(pixmap.mask());
    ui->labelLogo->show();

    ui->comboBoxDrive->addItems(driveTypesList);
    ui->comboBoxControl->addItems(controlTypesList);

    for(int i=0; i<portInfo.availablePorts().size();i++){
        ui->comboBoxPort->addItem(portInfo.availablePorts().at(i).portName());
    }

    ui->plotter1->addGraph();
    ui->plotter1->graph(0)->setPen(QPen(QColor("#000000")));

    ui->plotter2->addGraph();
    ui->plotter2->graph(0)->setPen(QPen(QColor("#000000")));

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->plotter1->xAxis->setTicker(timeTicker);
    ui->plotter1->yAxis->setLabel("Ток, мА");
    ui->plotter1->xAxis->setLabel("Время, с");
    ui->plotter1->yAxis->setRange(0,3000);
    ui->plotter1->xAxis->setRange(0, 10);

    ui->plotter2->xAxis->setTicker(timeTicker);
    ui->plotter2->yAxis->setLabel("Усилие, г");
    ui->plotter2->xAxis->setLabel("Время, с");
    ui->plotter2->yAxis->setRange(0,15000);
    ui->plotter2->xAxis->setRange(0, 10);

    connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
}


void MainWindow::on_pushButtonConnect_clicked(){
    if(connected){
        handler->close();
        connected = false;
        ui->pushButtonConnect->setText("Подключить");
        dataTimer.stop();
    }else{
        portSpeed = DEFAULT_SPEED;
        portName = ui->comboBoxPort->currentText();
        qDebug() << "Name:" << portName << "Speed:" << portSpeed;
        connected = handler->open(portName, portSpeed);
        if(connected){
            ui->pushButtonConnect->setText("Отключить");
            emit startListening();
            dataTimer.start(15);
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

    double key = dataTime.elapsed()/1000.0f;
    ui->plotter1->graph(0)->addData(key, values.value(0));
    ui->plotter2->graph(0)->addData(key, values.value(4));
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
}

void MainWindow::on_spinBoxTimeCooling_editingFinished()
{
    int val = ui->spinBoxTimeCooling->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,3,"+qstrval+'\n').toUtf8());
}

void MainWindow::on_spinBoxForceMinimum_editingFinished()
{
    int val = ui->spinBoxForceMinimum->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,5,"+qstrval+'\n').toUtf8());
}

void MainWindow::on_spinBoxCurrentStop_editingFinished()
{
    int val = ui->spinBoxCurrentStop->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,4,"+qstrval+'\n').toUtf8());
}

void MainWindow::on_spinBoxTempStop_editingFinished()
{
    int val = ui->spinBoxTempStop->value();
    QString qstrval = QString::number(val);
    handler->commit(QString("1,10,"+qstrval+'\n').toUtf8());
}
