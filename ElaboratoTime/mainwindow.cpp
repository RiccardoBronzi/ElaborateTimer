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
    //timerTimer = new QTimer(this);
    connect(timerDateTime,&QTimer::timeout, this, &MainWindow::showTime);
    timerDateTime->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTime()
{
    ui->dateTime->setText(data->updateDateTime());
}

void MainWindow::showTimer()
{
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
    timer->setTimer(3600);
    showStaticTimer();
}

void MainWindow::on_hourMinus_clicked()
{
    timer->setTimer(-3600);
    showStaticTimer();
}


void MainWindow::on_minutePlus_clicked()
{
    timer->setTimer(60);
    showStaticTimer();
}

void MainWindow::on_minuteMinus_clicked()
{
    timer->setTimer(-60);
    showStaticTimer();

}


void MainWindow::on_secondPlus_clicked()
{
    timer->setTimer(1);
    showStaticTimer();
}


void MainWindow::on_secondMinus_clicked()
{
    timer->setTimer(-1);
    showStaticTimer();
}
