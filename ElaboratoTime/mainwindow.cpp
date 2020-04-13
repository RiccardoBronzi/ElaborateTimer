#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    data = new DateTime;
    timer = new Timer;
    timerDateTime = new QTimer(this);
    timerTimer = new QTimer(this);

    connect(timerTimer,&QTimer::timeout, this, &MainWindow::showTimer);
    connect(timerDateTime,&QTimer::timeout, this, &MainWindow::showTime);
    timerDateTime->start(1000);

}

MainWindow::~MainWindow()
{
    delete timer;
    delete data;
    delete timerDateTime;
    delete timerTimer;
    delete ui;
}

void MainWindow::showTime()
{
    ui->dateTime->setText(data->updateDateTime());
}

void MainWindow::showTimer()
{
    if(timer->ring())
    {
        QMessageBox::about(this,"WARNING", "   DRIN DRIN     ");
        timerTimer->stop();
    }
    ui->timer->setText(timer->updateTimer());
}

void MainWindow::showStaticTimer()
{
    ui->timer->setText(timer->staticTime());
}

void MainWindow::on_changeFormat_clicked()
{
    data->updateButtonCountDateTime();
}

void MainWindow::on_start_clicked()
{
    timerTimer->start(1000);

}

void MainWindow::on_stop_clicked()
{
    timerTimer->stop();
    showStaticTimer();
}

void MainWindow::on_reset_clicked()
{
    timer->resetTimer();
    timerTimer->stop();
    showStaticTimer();
}

void MainWindow::on_hourPlus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("h+"))
       timer->setTimer(3600);
    showStaticTimer();
}

void MainWindow::on_hourMinus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("h-"))
       timer->setTimer(-3600);
    showStaticTimer();
}

void MainWindow::on_minutePlus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("m+"))
       timer->setTimer(60);
    showStaticTimer();
}

void MainWindow::on_minuteMinus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("m-"))
       timer->setTimer(-60);
    showStaticTimer();

}

void MainWindow::on_secondPlus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("s+"))
       timer->setTimer(1);
    showStaticTimer();
}

void MainWindow::on_secondMinus_clicked()
{
    if(!timerTimer->isActive() && timer->setValid("s-"))
      timer->setTimer(-1);
    showStaticTimer();
}
