#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include "datetime.h"
#include "timer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showTime();
    void showTimer();
    void showTimerText();
private slots:
    void on_changeFormat_clicked();
    void on_start_clicked();
    void on_stop_clicked();
    void on_reset_clicked();
    void on_hourPlus_clicked();
    void on_hourMinus_clicked();
    void on_minutePlus_clicked();
    void on_minuteMinus_clicked();
    void on_secondPlus_clicked();
    void on_secondMinus_clicked();
private:
    Ui::MainWindow *ui;
    DateTime data;
    Timer timer;
    QTimer *timerDateTime;
    QTimer *timerTimer;
};
#endif // MAINWINDOW_H
