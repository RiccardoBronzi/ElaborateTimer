#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "datetime.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer * timerDateTime;
    DateTime * data;
    void showTime();

private slots:
    void on_changeFormat_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
