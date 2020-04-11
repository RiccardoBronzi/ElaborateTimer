#ifndef TIMER_H
#define TIMER_H

#include<QTime>
#include<QString>

class Timer : public QTime
{
public:
    Timer();
    QString staticTime();
    QString updateTimer();
    int updateButtonCountTimer();
    void setTimer(int s);
    void resetTimer();
private:
    QTime time;
};

#endif // TIMER_H