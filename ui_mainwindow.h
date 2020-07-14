/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelTempNom;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *labelCurrent;
    QLabel *label_9;
    QLabel *labelShakesCount;
    QLabel *labelForce;
    QLabel *label;
    QComboBox *comboBoxPort;
    QLabel *labelTimeShake;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *labelCurrentStop;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *labelTempStop;
    QLabel *label_14;
    QPushButton *pushButtonConnect;
    QLabel *label_11;
    QLabel *labelTemp;
    QLabel *labelNoise;
    QLabel *label_5;
    QLabel *labelVoltage;
    QLabel *labelForceMinimum;
    QLabel *label_2;
    QLabel *labelTimeCooling;
    QLabel *labelLogo;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QSpinBox *spinBoxTempStop;
    QLabel *label_16;
    QPushButton *pushButtonClose;
    QSpinBox *spinBoxTimeShake;
    QSpinBox *spinBoxTimeCooling;
    QLabel *label_15;
    QSpinBox *spinBoxCurrentStop;
    QPushButton *pushButtonPause;
    QLabel *label_12;
    QPushButton *pushButtonStart;
    QLabel *label_20;
    QPushButton *pushButtonStop;
    QLabel *label_17;
    QComboBox *comboBoxDrive;
    QComboBox *comboBoxControl;
    QLabel *label_19;
    QPushButton *pushButtonOpen;
    QSpinBox *spinBoxForceMinimum;
    QHBoxLayout *horizontalLayout_3;
    QCustomPlot *plotter1;
    QCustomPlot *plotter2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1028, 674);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelTempNom = new QLabel(centralwidget);
        labelTempNom->setObjectName(QString::fromUtf8("labelTempNom"));

        gridLayout->addWidget(labelTempNom, 6, 1, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 12, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        labelCurrent = new QLabel(centralwidget);
        labelCurrent->setObjectName(QString::fromUtf8("labelCurrent"));

        gridLayout->addWidget(labelCurrent, 3, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        labelShakesCount = new QLabel(centralwidget);
        labelShakesCount->setObjectName(QString::fromUtf8("labelShakesCount"));

        gridLayout->addWidget(labelShakesCount, 2, 1, 1, 1);

        labelForce = new QLabel(centralwidget);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));

        gridLayout->addWidget(labelForce, 4, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxPort = new QComboBox(centralwidget);
        comboBoxPort->setObjectName(QString::fromUtf8("comboBoxPort"));

        gridLayout->addWidget(comboBoxPort, 0, 1, 1, 1);

        labelTimeShake = new QLabel(centralwidget);
        labelTimeShake->setObjectName(QString::fromUtf8("labelTimeShake"));

        gridLayout->addWidget(labelTimeShake, 10, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        labelCurrentStop = new QLabel(centralwidget);
        labelCurrentStop->setObjectName(QString::fromUtf8("labelCurrentStop"));

        gridLayout->addWidget(labelCurrentStop, 12, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        labelTempStop = new QLabel(centralwidget);
        labelTempStop->setObjectName(QString::fromUtf8("labelTempStop"));

        gridLayout->addWidget(labelTempStop, 7, 1, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 13, 0, 1, 1);

        pushButtonConnect = new QPushButton(centralwidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        gridLayout->addWidget(pushButtonConnect, 1, 1, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        labelTemp = new QLabel(centralwidget);
        labelTemp->setObjectName(QString::fromUtf8("labelTemp"));

        gridLayout->addWidget(labelTemp, 5, 1, 1, 1);

        labelNoise = new QLabel(centralwidget);
        labelNoise->setObjectName(QString::fromUtf8("labelNoise"));

        gridLayout->addWidget(labelNoise, 8, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        labelVoltage = new QLabel(centralwidget);
        labelVoltage->setObjectName(QString::fromUtf8("labelVoltage"));

        gridLayout->addWidget(labelVoltage, 9, 1, 1, 1);

        labelForceMinimum = new QLabel(centralwidget);
        labelForceMinimum->setObjectName(QString::fromUtf8("labelForceMinimum"));

        gridLayout->addWidget(labelForceMinimum, 13, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        labelTimeCooling = new QLabel(centralwidget);
        labelTimeCooling->setObjectName(QString::fromUtf8("labelTimeCooling"));

        gridLayout->addWidget(labelTimeCooling, 11, 1, 1, 1);

        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));

        gridLayout->addWidget(labelLogo, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 7, 0, 1, 1);

        spinBoxTempStop = new QSpinBox(centralwidget);
        spinBoxTempStop->setObjectName(QString::fromUtf8("spinBoxTempStop"));

        gridLayout_2->addWidget(spinBoxTempStop, 9, 1, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        pushButtonClose = new QPushButton(centralwidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        gridLayout_2->addWidget(pushButtonClose, 4, 1, 1, 1);

        spinBoxTimeShake = new QSpinBox(centralwidget);
        spinBoxTimeShake->setObjectName(QString::fromUtf8("spinBoxTimeShake"));
        spinBoxTimeShake->setMaximum(100000);

        gridLayout_2->addWidget(spinBoxTimeShake, 5, 1, 1, 1);

        spinBoxTimeCooling = new QSpinBox(centralwidget);
        spinBoxTimeCooling->setObjectName(QString::fromUtf8("spinBoxTimeCooling"));
        spinBoxTimeCooling->setMaximum(100000);

        gridLayout_2->addWidget(spinBoxTimeCooling, 6, 1, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        spinBoxCurrentStop = new QSpinBox(centralwidget);
        spinBoxCurrentStop->setObjectName(QString::fromUtf8("spinBoxCurrentStop"));
        spinBoxCurrentStop->setMaximum(10000);

        gridLayout_2->addWidget(spinBoxCurrentStop, 8, 1, 1, 1);

        pushButtonPause = new QPushButton(centralwidget);
        pushButtonPause->setObjectName(QString::fromUtf8("pushButtonPause"));

        gridLayout_2->addWidget(pushButtonPause, 2, 1, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        gridLayout_2->addWidget(pushButtonStart, 2, 0, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 9, 0, 1, 1);

        pushButtonStop = new QPushButton(centralwidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        gridLayout_2->addWidget(pushButtonStop, 3, 0, 1, 2);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 6, 0, 1, 1);

        comboBoxDrive = new QComboBox(centralwidget);
        comboBoxDrive->setObjectName(QString::fromUtf8("comboBoxDrive"));

        gridLayout_2->addWidget(comboBoxDrive, 0, 1, 1, 1);

        comboBoxControl = new QComboBox(centralwidget);
        comboBoxControl->setObjectName(QString::fromUtf8("comboBoxControl"));

        gridLayout_2->addWidget(comboBoxControl, 1, 1, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 8, 0, 1, 1);

        pushButtonOpen = new QPushButton(centralwidget);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));

        gridLayout_2->addWidget(pushButtonOpen, 4, 0, 1, 1);

        spinBoxForceMinimum = new QSpinBox(centralwidget);
        spinBoxForceMinimum->setObjectName(QString::fromUtf8("spinBoxForceMinimum"));
        spinBoxForceMinimum->setMaximum(1000000);

        gridLayout_2->addWidget(spinBoxForceMinimum, 7, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        plotter1 = new QCustomPlot(centralwidget);
        plotter1->setObjectName(QString::fromUtf8("plotter1"));

        horizontalLayout_3->addWidget(plotter1);

        plotter2 = new QCustomPlot(centralwidget);
        plotter2->setObjectName(QString::fromUtf8("plotter2"));

        horizontalLayout_3->addWidget(plotter2);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1028, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\201\321\202\320\265\320\275\320\264\320\276\320\274 \320\236\320\242\320\232", nullptr));
        labelTempNom->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\272 \320\276\321\202\321\201\320\265\321\207\320\272\320\270", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\266\320\260\321\202\320\270\321\217", nullptr));
        labelCurrent->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", nullptr));
        labelShakesCount->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelForce->setText(QApplication::translate("MainWindow", "0", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\321\202", nullptr));
        labelTimeShake->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\210\321\203\320\274\320\260", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277. \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelCurrentStop->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\241\320\270\320\273\320\260 \321\202\320\276\320\272\320\260", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274. \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        labelTempStop->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\320\273\320\260", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\201\321\202\320\276\321\217", nullptr));
        labelTemp->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelNoise->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        labelVoltage->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelForceMinimum->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\320\266\320\260\321\202\320\270\321\217", nullptr));
        labelTimeCooling->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelLogo->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\320\273\320\260", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\266\320\260\321\202\320\270\321\217, \320\274\321\201", nullptr));
        pushButtonClose->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushButtonPause->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\270\320\262\320\276\320\264\320\260", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270, C", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\201\321\202\320\276\321\217, \320\274\321\201", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\272 \320\276\321\202\321\201\320\265\321\207\320\272\320\270, \320\274\320\220", nullptr));
        pushButtonOpen->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
