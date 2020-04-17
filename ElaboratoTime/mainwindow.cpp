#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerDateTime = new QTimer(this);
    timerTimer = new QTimer(this);
    connect(timerTimer,&QTimer::timeout, this, &MainWindow::showTimer);
    connect(timerDateTime,&QTimer::timeout, this, &MainWindow::showTime);
    timerDateTime->start(1000);
}

MainWindow::~MainWindow()
{
    delete timerDateTime;
    delete timerTimer;
    delete ui;
}

void MainWindow::showTime()
{
    ui->dateTime->setText(data.updateDateTime());
}

void MainWindow::showTimer()
{
    if(timer.isFinished())
    {
        QMessageBox::about(this,"WARNING", "   DRIN DRIN     ");
        timerTimer->stop();
    }
    ui->timer->setText(timer.update());
}

void MainWindow::showTimerText()
{
    ui->timer->setText(timer.toString());
}

void MainWindow::on_changeFormat_clicked()
{
    data.updateButtonCountDateTime();
}

void MainWindow::on_start_clicked()
{
    if(!timerTimer->isActive())
       timerTimer->start(1000);
}

void MainWindow::on_stop_clicked()
{
    timerTimer->stop();
    showTimerText();
}

void MainWindow::on_reset_clicked()
{
    timer.reset();
    timerTimer->stop();
    showTimerText();
}

void MainWindow::on_hourPlus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("h+"))
       timer.addSeconds(3600);
    showTimerText();
}

void MainWindow::on_hourMinus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("h-"))
       timer.addSeconds(-3600);
    showTimerText();
}

void MainWindow::on_minutePlus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("m+"))
       timer.addSeconds(60);
    showTimerText();
}

void MainWindow::on_minuteMinus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("m-"))
       timer.addSeconds(-60);
    showTimerText();
}

void MainWindow::on_secondPlus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("s+"))
       timer.addSeconds(1);
    showTimerText();
}

void MainWindow::on_secondMinus_clicked()
{
    if(!timerTimer->isActive() && timer.setValid("s-"))
       timer.addSeconds(-1);
    showTimerText();
}
