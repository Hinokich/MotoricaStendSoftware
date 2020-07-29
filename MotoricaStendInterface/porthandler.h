#ifndef PORTHANDLER_H
#define PORTHANDLER_H

#include <QObject>
#include <QThread>
#include <QSerialPort>
#include <QFile>
#include <QTime>

class Porthandler : public QObject
{
    Q_OBJECT
public:
    Porthandler(QVector<int>* dataVectorPtr);
    bool open(QString name, int speed);
    bool close();
    int setSpeed(int speed);
    int setPort(QString name);
    int commit(QByteArray txData);
    int openFile();
    bool doLogDebug(bool state);
    bool doLogTimestamp(bool state);

signals:
    void dataGet();

public slots:
    void process();

private:
   QSerialPort port;
   QFile file;
   QVector<int>* dataVector;
   int portSpeed = 115200;
   QString portName;
   bool doRead = false;
   bool isWriting = false;
   QByteArray internalBuffer;
   QString header = " Shakes count, Current, Force, Shake Time, Cooling Time, Stop Current, Stop Force, Temp, Nominal Temp, Stop Temp, Noise, Voltage, testState, currentAverage, forceMaximum\n";
   int paramsCount = 15;
   bool logDebug = false;
   bool logTimestamp = false;
   QTime dataTime;
};

#endif // PORTHANDLER_H
