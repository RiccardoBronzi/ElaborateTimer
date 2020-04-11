#include "datetime.h"

DateTime::DateTime()
{
  buttonCountDateTime=1;
  today=currentDateTime();
}

QString DateTime::changeFormat()
{
  switch (buttonCountDateTime%3){
      case 1:
         return today.toString("dd.MM.yyyy hh:mm:ss");
      case 2:
         return today.toString("MM.dd.yyyy hh:mm:ss");
      case 0:
         return today.toString("dddd d MMMM yyyy hh:mm:ss");
  }
}

QString DateTime::updateDateTime()
{
    today=currentDateTime();
    return changeFormat();
}

void DateTime::updateButtonCountDateTime()
{
    buttonCountDateTime++;
}

