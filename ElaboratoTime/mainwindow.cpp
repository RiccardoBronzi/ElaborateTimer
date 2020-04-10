#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    data = new DateTime;
    timerDateTime = new QTimer(this);

    connect(timerDateTime,&QTimer::timeout, this, &MainWindow::showTime);
    timerDateTime->start(100);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTime()
{
   ui->dateTime->setText(data->updateDateTime());
}

void MainWindow::on_changeFormat_clicked()
{
    data->updateButtonCountDateTime();

}
