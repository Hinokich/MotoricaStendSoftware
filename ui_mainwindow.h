/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QLabel *labelVoltage;
    QLabel *label_8;
    QLabel *labelForce;
    QLabel *labelTimeCooling;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *labelTimeShake;
    QLabel *labelForceMaximum;
    QLabel *labelForceMinimum;
    QLabel *labelCurrentAverage;
    QLabel *label_9;
    QLabel *label;
    QLabel *labelTempNom;
    QPushButton *pushButtonConnect;
    QLabel *labelShakesCount;
    QLabel *labelLogo;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *labelTestState;
    QLabel *label_22;
    QLabel *labelNoise;
    QLabel *labelCurrentStop;
    QLabel *label_21;
    QLabel *label_4;
    QLabel *label_10;
    QFrame *line;
    QLabel *labelTempStop;
    QLabel *label_2;
    QLabel *labelCurrent;
    QLabel *labelTemp;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBoxPort;
    QPushButton *pushButtonRefresh;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBoxTempStop;
    QLabel *label_24;
    QComboBox *comboBoxControl;
    QPushButton *pushButtonOpen;
    QSpinBox *spinBoxTimeShake;
    QPushButton *pushButtonClose;
    QSpinBox *spinBoxTimeCooling;
    QLabel *label_17;
    QSpinBox *spinBoxShakesTarget;
    QLabel *label_15;
    QLabel *label_23;
    QComboBox *comboBoxDrive;
    QPushButton *pushButtonStart;
    QLabel *label_16;
    QPushButton *pushButtonPause;
    QSpinBox *spinBoxForceMinimum;
    QLabel *label_18;
    QLabel *label_12;
    QSpinBox *spinBoxCurrentStop;
    QLabel *label_19;
    QPushButton *pushButtonStop;
    QLabel *label_20;
    QCheckBox *checkBoxShakesTarget;
    QLabel *label_25;
    QSpinBox *spinBoxServoPos;
    QSpinBox *spinBoxServoPosStart;
    QSpinBox *spinBoxServoPosStop;
    QHBoxLayout *horizontalLayout_3;
    QCustomPlot *plotter1;
    QCustomPlot *plotter2;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBoxForceSmooth;
    QPushButton *pushButton;
    QCheckBox *checkBoxCurrentSmooth;
    QCheckBox *checkBoxLogDebug;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxTensoCalib;
    QLabel *labelRUD;
    QLabel *labelOverheat;
    QCheckBox *checkBoxLogTimestamp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1113, 908);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelVoltage = new QLabel(centralwidget);
        labelVoltage->setObjectName(QString::fromUtf8("labelVoltage"));

        gridLayout->addWidget(labelVoltage, 10, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        labelForce = new QLabel(centralwidget);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));

        gridLayout->addWidget(labelForce, 5, 1, 1, 1);

        labelTimeCooling = new QLabel(centralwidget);
        labelTimeCooling->setObjectName(QString::fromUtf8("labelTimeCooling"));

        gridLayout->addWidget(labelTimeCooling, 12, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 12, 0, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 14, 0, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 13, 0, 1, 1);

        labelTimeShake = new QLabel(centralwidget);
        labelTimeShake->setObjectName(QString::fromUtf8("labelTimeShake"));

        gridLayout->addWidget(labelTimeShake, 11, 1, 1, 1);

        labelForceMaximum = new QLabel(centralwidget);
        labelForceMaximum->setObjectName(QString::fromUtf8("labelForceMaximum"));

        gridLayout->addWidget(labelForceMaximum, 17, 1, 1, 1);

        labelForceMinimum = new QLabel(centralwidget);
        labelForceMinimum->setObjectName(QString::fromUtf8("labelForceMinimum"));

        gridLayout->addWidget(labelForceMinimum, 14, 1, 1, 1);

        labelCurrentAverage = new QLabel(centralwidget);
        labelCurrentAverage->setObjectName(QString::fromUtf8("labelCurrentAverage"));

        gridLayout->addWidget(labelCurrentAverage, 16, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 10, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 16, 0, 1, 1);

        labelTempNom = new QLabel(centralwidget);
        labelTempNom->setObjectName(QString::fromUtf8("labelTempNom"));

        gridLayout->addWidget(labelTempNom, 7, 1, 1, 1);

        pushButtonConnect = new QPushButton(centralwidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        gridLayout->addWidget(pushButtonConnect, 2, 1, 1, 1);

        labelShakesCount = new QLabel(centralwidget);
        labelShakesCount->setObjectName(QString::fromUtf8("labelShakesCount"));

        gridLayout->addWidget(labelShakesCount, 3, 1, 1, 1);

        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setTextFormat(Qt::PlainText);
        labelLogo->setScaledContents(false);
        labelLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLogo, 0, 0, 3, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        labelTestState = new QLabel(centralwidget);
        labelTestState->setObjectName(QString::fromUtf8("labelTestState"));

        gridLayout->addWidget(labelTestState, 18, 1, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 18, 0, 1, 1);

        labelNoise = new QLabel(centralwidget);
        labelNoise->setObjectName(QString::fromUtf8("labelNoise"));

        gridLayout->addWidget(labelNoise, 9, 1, 1, 1);

        labelCurrentStop = new QLabel(centralwidget);
        labelCurrentStop->setObjectName(QString::fromUtf8("labelCurrentStop"));

        gridLayout->addWidget(labelCurrentStop, 13, 1, 1, 1);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 17, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 15, 0, 1, 2);

        labelTempStop = new QLabel(centralwidget);
        labelTempStop->setObjectName(QString::fromUtf8("labelTempStop"));

        gridLayout->addWidget(labelTempStop, 8, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        labelCurrent = new QLabel(centralwidget);
        labelCurrent->setObjectName(QString::fromUtf8("labelCurrent"));

        gridLayout->addWidget(labelCurrent, 4, 1, 1, 1);

        labelTemp = new QLabel(centralwidget);
        labelTemp->setObjectName(QString::fromUtf8("labelTemp"));

        gridLayout->addWidget(labelTemp, 6, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBoxPort = new QComboBox(centralwidget);
        comboBoxPort->setObjectName(QString::fromUtf8("comboBoxPort"));

        horizontalLayout_5->addWidget(comboBoxPort);

        pushButtonRefresh = new QPushButton(centralwidget);
        pushButtonRefresh->setObjectName(QString::fromUtf8("pushButtonRefresh"));

        horizontalLayout_5->addWidget(pushButtonRefresh);


        gridLayout->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinBoxTempStop = new QSpinBox(centralwidget);
        spinBoxTempStop->setObjectName(QString::fromUtf8("spinBoxTempStop"));
        spinBoxTempStop->setValue(60);

        gridLayout_2->addWidget(spinBoxTempStop, 9, 1, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 12, 0, 1, 1);

        comboBoxControl = new QComboBox(centralwidget);
        comboBoxControl->setObjectName(QString::fromUtf8("comboBoxControl"));

        gridLayout_2->addWidget(comboBoxControl, 1, 1, 1, 1);

        pushButtonOpen = new QPushButton(centralwidget);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButtonOpen->setFont(font);

        gridLayout_2->addWidget(pushButtonOpen, 4, 0, 1, 1);

        spinBoxTimeShake = new QSpinBox(centralwidget);
        spinBoxTimeShake->setObjectName(QString::fromUtf8("spinBoxTimeShake"));
        spinBoxTimeShake->setMaximum(100000);
        spinBoxTimeShake->setValue(500);

        gridLayout_2->addWidget(spinBoxTimeShake, 5, 1, 1, 1);

        pushButtonClose = new QPushButton(centralwidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setFont(font);

        gridLayout_2->addWidget(pushButtonClose, 4, 1, 1, 1);

        spinBoxTimeCooling = new QSpinBox(centralwidget);
        spinBoxTimeCooling->setObjectName(QString::fromUtf8("spinBoxTimeCooling"));
        spinBoxTimeCooling->setMaximum(100000);
        spinBoxTimeCooling->setValue(1000);

        gridLayout_2->addWidget(spinBoxTimeCooling, 6, 1, 1, 1);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 6, 0, 1, 1);

        spinBoxShakesTarget = new QSpinBox(centralwidget);
        spinBoxShakesTarget->setObjectName(QString::fromUtf8("spinBoxShakesTarget"));
        spinBoxShakesTarget->setEnabled(false);
        spinBoxShakesTarget->setMaximum(1000000);
        spinBoxShakesTarget->setValue(1000);

        gridLayout_2->addWidget(spinBoxShakesTarget, 10, 1, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 11, 0, 1, 1);

        comboBoxDrive = new QComboBox(centralwidget);
        comboBoxDrive->setObjectName(QString::fromUtf8("comboBoxDrive"));

        gridLayout_2->addWidget(comboBoxDrive, 0, 1, 1, 1);

        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setFont(font);
        pushButtonStart->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);"));

        gridLayout_2->addWidget(pushButtonStart, 2, 0, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        pushButtonPause = new QPushButton(centralwidget);
        pushButtonPause->setObjectName(QString::fromUtf8("pushButtonPause"));
        pushButtonPause->setFont(font);
        pushButtonPause->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 123);"));

        gridLayout_2->addWidget(pushButtonPause, 2, 1, 1, 1);

        spinBoxForceMinimum = new QSpinBox(centralwidget);
        spinBoxForceMinimum->setObjectName(QString::fromUtf8("spinBoxForceMinimum"));
        spinBoxForceMinimum->setMaximum(1000000);
        spinBoxForceMinimum->setValue(5000);

        gridLayout_2->addWidget(spinBoxForceMinimum, 7, 1, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 7, 0, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        spinBoxCurrentStop = new QSpinBox(centralwidget);
        spinBoxCurrentStop->setObjectName(QString::fromUtf8("spinBoxCurrentStop"));
        spinBoxCurrentStop->setMaximum(10000);
        spinBoxCurrentStop->setValue(600);

        gridLayout_2->addWidget(spinBoxCurrentStop, 8, 1, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 8, 0, 1, 1);

        pushButtonStop = new QPushButton(centralwidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));
        pushButtonStop->setFont(font);
        pushButtonStop->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 155, 190);"));

        gridLayout_2->addWidget(pushButtonStop, 3, 0, 1, 2);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 9, 0, 1, 1);

        checkBoxShakesTarget = new QCheckBox(centralwidget);
        checkBoxShakesTarget->setObjectName(QString::fromUtf8("checkBoxShakesTarget"));
        checkBoxShakesTarget->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkBoxShakesTarget, 10, 0, 1, 1);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 13, 0, 1, 1);

        spinBoxServoPos = new QSpinBox(centralwidget);
        spinBoxServoPos->setObjectName(QString::fromUtf8("spinBoxServoPos"));
        spinBoxServoPos->setMaximum(360);

        gridLayout_2->addWidget(spinBoxServoPos, 11, 1, 1, 1);

        spinBoxServoPosStart = new QSpinBox(centralwidget);
        spinBoxServoPosStart->setObjectName(QString::fromUtf8("spinBoxServoPosStart"));
        spinBoxServoPosStart->setMaximum(360);

        gridLayout_2->addWidget(spinBoxServoPosStart, 12, 1, 1, 1);

        spinBoxServoPosStop = new QSpinBox(centralwidget);
        spinBoxServoPosStop->setObjectName(QString::fromUtf8("spinBoxServoPosStop"));
        spinBoxServoPosStop->setMaximum(360);
        spinBoxServoPosStop->setValue(180);

        gridLayout_2->addWidget(spinBoxServoPosStop, 13, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        plotter1 = new QCustomPlot(centralwidget);
        plotter1->setObjectName(QString::fromUtf8("plotter1"));
        plotter1->setMinimumSize(QSize(500, 250));

        horizontalLayout_3->addWidget(plotter1);

        plotter2 = new QCustomPlot(centralwidget);
        plotter2->setObjectName(QString::fromUtf8("plotter2"));
        plotter2->setMinimumSize(QSize(500, 250));

        horizontalLayout_3->addWidget(plotter2);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBoxForceSmooth = new QCheckBox(centralwidget);
        checkBoxForceSmooth->setObjectName(QString::fromUtf8("checkBoxForceSmooth"));
        checkBoxForceSmooth->setChecked(true);

        gridLayout_3->addWidget(checkBoxForceSmooth, 0, 3, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 5, 1, 1);

        checkBoxCurrentSmooth = new QCheckBox(centralwidget);
        checkBoxCurrentSmooth->setObjectName(QString::fromUtf8("checkBoxCurrentSmooth"));
        checkBoxCurrentSmooth->setChecked(true);

        gridLayout_3->addWidget(checkBoxCurrentSmooth, 0, 2, 1, 1);

        checkBoxLogDebug = new QCheckBox(centralwidget);
        checkBoxLogDebug->setObjectName(QString::fromUtf8("checkBoxLogDebug"));

        gridLayout_3->addWidget(checkBoxLogDebug, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 8, 1, 1);

        spinBoxTensoCalib = new QSpinBox(centralwidget);
        spinBoxTensoCalib->setObjectName(QString::fromUtf8("spinBoxTensoCalib"));
        spinBoxTensoCalib->setMaximum(10000);
        spinBoxTensoCalib->setValue(1000);

        gridLayout_3->addWidget(spinBoxTensoCalib, 0, 4, 1, 1);

        labelRUD = new QLabel(centralwidget);
        labelRUD->setObjectName(QString::fromUtf8("labelRUD"));
        labelRUD->setMinimumSize(QSize(64, 64));
        labelRUD->setMaximumSize(QSize(64, 64));

        gridLayout_3->addWidget(labelRUD, 0, 1, 1, 1);

        labelOverheat = new QLabel(centralwidget);
        labelOverheat->setObjectName(QString::fromUtf8("labelOverheat"));
        labelOverheat->setMinimumSize(QSize(64, 64));
        labelOverheat->setMaximumSize(QSize(64, 64));

        gridLayout_3->addWidget(labelOverheat, 0, 0, 1, 1);

        checkBoxLogTimestamp = new QCheckBox(centralwidget);
        checkBoxLogTimestamp->setObjectName(QString::fromUtf8("checkBoxLogTimestamp"));

        gridLayout_3->addWidget(checkBoxLogTimestamp, 0, 7, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1113, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\201\321\202\320\265\320\275\320\264\320\276\320\274 \320\236\320\242\320\232", nullptr));
        labelVoltage->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277. \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        labelForce->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelTimeCooling->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\210\321\203\320\274\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\201\321\202\320\276\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\320\273\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\272 \320\276\321\202\321\201\320\265\321\207\320\272\320\270", nullptr));
        labelTimeShake->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelForceMaximum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelForceMinimum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelCurrentAverage->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\202\320\276\320\272 \321\206\320\270\320\272\320\273\320\260", nullptr));
        labelTempNom->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        labelShakesCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelLogo->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\273\320\260 \321\202\320\276\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        labelTestState->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\270\321\201\320\277\321\213\321\202\320\260\320\275\320\270\320\271", nullptr));
        labelNoise->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelCurrentStop->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\203\321\201\320\270\320\273\320\270\320\265 \320\267\320\260 \321\206\320\270\320\272\320\273", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\273\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\266\320\260\321\202\320\270\321\217", nullptr));
        labelTempStop->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\266\320\260\321\202\320\270\321\217", nullptr));
        labelCurrent->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelTemp->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274. \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        pushButtonRefresh->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\203\320\263\320\276\320\273 \321\201\320\265\321\200\320\262\320\276\320\277\321\200\320\270\320\262\320\276\320\264\320\260", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\201\321\202\320\276\321\217, \320\274\321\201", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\260\321\217 \320\277\320\276\320\267\320\270\321\206\320\270\321\217 \321\201\320\265\321\200\320\262\320\276\320\277\321\200\320\270\320\262\320\276\320\264\320\260", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\266\320\260\321\202\320\270\321\217, \320\274\321\201", nullptr));
        pushButtonPause->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\320\273\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\270\320\262\320\276\320\264\320\260", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\272 \320\276\321\202\321\201\320\265\321\207\320\272\320\270, \320\274\320\220", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270, C", nullptr));
        checkBoxShakesTarget->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \321\201\320\266\320\260\321\202\320\270\320\271", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\321\213\320\271 \321\203\320\263\320\276\320\273 \321\201\320\265\321\200\320\262\320\276\320\277\321\200\320\270\320\262\320\276\320\264\320\260", nullptr));
        checkBoxForceSmooth->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\273\320\260\320\266\320\270\320\262\320\260\320\275\320\270\320\265 \321\201\320\270\320\273\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\270\320\261\321\200\320\276\320\262\320\272\320\260 \321\202\320\265\320\275\320\267\320\276", nullptr));
        checkBoxCurrentSmooth->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\273\320\260\320\266\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\272\320\260", nullptr));
        checkBoxLogDebug->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\321\203\320\266\320\265\320\261\320\275\321\213\320\265\n"
"\320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262 \320\273\320\276\320\263\320\265", nullptr));
        labelRUD->setText(QString());
        labelOverheat->setText(QString());
        checkBoxLogTimestamp->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\262 \320\273\320\276\320\263\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
