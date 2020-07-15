#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void refreshData();
    void realtimeDataSlot();
    void plotScalingSlot();

signals:
    void startListening();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonStart_clicked();

    void on_pushButtonPause_clicked();

    void on_pushButtonStop_clicked();

    void on_pushButtonOpen_clicked();

    void on_pushButtonClose_clicked();

    void on_spinBoxTimeShake_editingFinished();

    void on_spinBoxTimeCooling_editingFinished();

    void on_spinBoxForceMinimum_editingFinished();

    void on_spinBoxCurrentStop_editingFinished();

    void on_spinBoxTempStop_editingFinished();

    void on_pushButton_clicked();

    void on_checkBoxCurrentSmooth_stateChanged(int arg1);

    void on_checkBoxForceSmooth_stateChanged(int arg1);

    void on_comboBoxDrive_currentIndexChanged(int index);

    void on_comboBoxControl_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    void setupGUI();
    void setupStartup();
    QPixmap overheat;
    QPixmap overheatInactive;
    QPixmap RUD;
    QPixmap RUDInactive;
};
#endif // MAINWINDOW_H
