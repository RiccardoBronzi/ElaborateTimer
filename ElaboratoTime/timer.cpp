#include "timer.h"

Timer::Timer()
{
    time = QTime(0,0,0);
}

QString Timer::staticTime()
{
    return time.toString();
}

QString Timer::updateTimer()
{
   if(time.hour()!=0 || time.minute()!=0 || time.second()!=0)
      time=time.addSecs(-1);
   return staticTime();
}

bool Timer::ring()
{
    if(time.hour()==0 && time.minute()==0 && time.second()==0)
        return true;
    else
        return false;
}

bool Timer::setValid(QString setupType)
{
    if(setupType=="m+")
        if(time.minute()==59)
            return false;
    if(setupType=="m-")
        if(time.minute()==0)
            return false;
    if(setupType=="s+")
        if(time.second()==59)
            return false;
    if(setupType=="s-")
        if(time.minute()==0)
            return false;
    if(setupType=="h+")
        if(time.hour()==23)
            return false;
    if(setupType=="h-")
        if(time.hour()==0)
            return false;
    return true;

}

void Timer::setTimer(int s)
{
    time = time.addSecs(s);
}

void Timer::resetTimer()
{
    time.setHMS(0,0,0,0);
}


