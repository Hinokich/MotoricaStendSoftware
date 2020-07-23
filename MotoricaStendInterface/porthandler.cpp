#include "porthandler.h"
#include <QDebug>
#include <QDateTime>

Porthandler::Porthandler(QVector<int>* dataVectorPtr){
    dataVector = dataVectorPtr;
}

bool Porthandler::open(QString name, int speed){
    portName = name;
    portSpeed = speed;
    port.setBaudRate(portSpeed, QSerialPort::AllDirections);
    port.setDataBits(QSerialPort::Data8);
    port.setFlowControl(QSerialPort::NoFlowControl);
    port.setParity(QSerialPort::NoParity);
    port.setStopBits(QSerialPort::OneStop);
    port.setPortName(portName);
    qDebug() << "Port name:" << portName << "speed:" << portSpeed;
    bool portState = port.open(QIODevice::ReadWrite);
    doRead = portState;
    if(portState){
        openFile();
    }
    return portState;
}

bool Porthandler::close(){
    doRead = false;
    isWriting = false;
    file.close();
    port.close();
    return true;
}

int Porthandler::setSpeed(int speed){
    portSpeed = speed;
    return 1;
}

int Porthandler::setPort(QString name){
    portName = name;
    return 1;
}

int Porthandler::commit(QByteArray txData){
    int a = port.write(txData);
    qDebug() << a << "bytes written with package" << txData;
    return a;
}

void Porthandler::process(){
    char buf[256];
    while(doRead){
        if(port.bytesAvailable()>0){
            if(port.canReadLine()){
                int lineLength = port.readLine(buf, 256);
                QByteArray input(buf);
                qDebug() << "Input Buf:" << input;
                QList<QByteArray> sep = input.split(' ');
                for(int i=0; i<paramsCount; i++){
                    int val = sep.value(i).toInt();
                    dataVector->replace(i,val);
                }
                emit dataGet();
                if(isWriting){
                    QTextStream out(&file);
                    out << input;
                }
            }
        }
    }
}

int Porthandler::openFile(){
    QString namef = "logs/report_";
    QDateTime dateTime = QDateTime::currentDateTime();
    QDate date = dateTime.date();
    namef = namef + date.toString("yyMMdd") +"_" + dateTime.toUTC().toString("hhmmss") + ".txt";
    file.setFileName(namef);
    qDebug() << "attempt to open:" << namef;
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "!!!A BIG SHIT HAPENT!!!";
        qDebug() << file.errorString();
        return 0;
    }
    QTextStream out(&file);
    out << header;
    isWriting = true;
}
