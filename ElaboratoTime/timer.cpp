#include "timer.h"

Timer::Timer()
{
    time = QTime(0,0,0);
}

QString Timer::toString()
{
    return time.toString();
}

QString Timer::update()
{
    if(time.hour()!=0 || time.minute()!=0 || time.second()!=0)
       time=time.addSecs(-1);
    return toString();
}

bool Timer::isFinished()
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
       if(time.second()==0)
          return false;
    if(setupType=="h+")
       if(time.hour()==23)
          return false;
    if(setupType=="h-")
       if(time.hour()==0)
          return false;
    return true;
}

void Timer::addSeconds(int s)
{
    time = time.addSecs(s);
}

void Timer::reset()
{
    time.setHMS(0,0,0,0);
}
