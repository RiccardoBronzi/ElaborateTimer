/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *changeFormat;
    QLabel *dateTime;
    QLabel *timer;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *reset;
    QPushButton *hourPlus;
    QPushButton *hourMinus;
    QPushButton *minutePlus;
    QPushButton *secondPlus;
    QPushButton *minuteMinus;
    QPushButton *secondMinus;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        changeFormat = new QPushButton(centralwidget);
        changeFormat->setObjectName(QString::fromUtf8("changeFormat"));
        changeFormat->setGeometry(QRect(310, 120, 151, 41));
        dateTime = new QLabel(centralwidget);
        dateTime->setObjectName(QString::fromUtf8("dateTime"));
        dateTime->setGeometry(QRect(30, 20, 741, 71));
        QFont font;
        font.setPointSize(26);
        font.setBold(false);
        font.setWeight(50);
        dateTime->setFont(font);
        dateTime->setAlignment(Qt::AlignCenter);
        timer = new QLabel(centralwidget);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(250, 290, 271, 71));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        timer->setFont(font1);
        timer->setAlignment(Qt::AlignCenter);
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(190, 450, 93, 28));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(340, 450, 93, 28));
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(480, 450, 93, 28));
        hourPlus = new QPushButton(centralwidget);
        hourPlus->setObjectName(QString::fromUtf8("hourPlus"));
        hourPlus->setGeometry(QRect(260, 260, 41, 31));
        hourMinus = new QPushButton(centralwidget);
        hourMinus->setObjectName(QString::fromUtf8("hourMinus"));
        hourMinus->setGeometry(QRect(260, 360, 41, 31));
        minutePlus = new QPushButton(centralwidget);
        minutePlus->setObjectName(QString::fromUtf8("minutePlus"));
        minutePlus->setGeometry(QRect(360, 260, 41, 31));
        secondPlus = new QPushButton(centralwidget);
        secondPlus->setObjectName(QString::fromUtf8("secondPlus"));
        secondPlus->setGeometry(QRect(460, 260, 41, 31));
        minuteMinus = new QPushButton(centralwidget);
        minuteMinus->setObjectName(QString::fromUtf8("minuteMinus"));
        minuteMinus->setGeometry(QRect(360, 360, 41, 31));
        secondMinus = new QPushButton(centralwidget);
        secondMinus->setObjectName(QString::fromUtf8("secondMinus"));
        secondMinus->setGeometry(QRect(460, 360, 41, 31));
        MainWindow->setCentralWidget(centralwidget);
        changeFormat->raise();
        dateTime->raise();
        timer->raise();
        start->raise();
        stop->raise();
        reset->raise();
        hourMinus->raise();
        minutePlus->raise();
        secondPlus->raise();
        hourPlus->raise();
        minuteMinus->raise();
        secondMinus->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        changeFormat->setText(QCoreApplication::translate("MainWindow", "Change format of Date", nullptr));
        dateTime->setText(QString());
        timer->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        hourPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        hourMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        minutePlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        secondPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minuteMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        secondMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
