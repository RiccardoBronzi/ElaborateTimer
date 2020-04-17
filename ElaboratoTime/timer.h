#ifndef TIMER_H
#define TIMER_H

#include<QTime>
#include<QString>


class Timer
{
public:
    Timer();
    QString toString();
    QString update();
    bool isFinished();
    bool setValid(QString setupType);
    void addSeconds(int s);
    void reset();
private:
    QTime time;
};

#endif // TIMER_H
