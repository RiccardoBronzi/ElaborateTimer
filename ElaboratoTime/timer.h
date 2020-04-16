#ifndef TIMER_H
#define TIMER_H

#include<QTime>
#include<QString>


class Timer
{
public:

    Timer();
    QString staticTime();
    QString update();
    bool ring();
    bool setValid(QString setupType);
    void set(int s);
    void reset();
private:
    QTime time;
};

#endif // TIMER_H
