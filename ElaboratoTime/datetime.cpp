#include "datetime.h"

DateTime::DateTime():QDateTime(currentDateTime())
{
  today=currentDateTime();
  buttonCountDateTime=1;
}

QString DateTime::changeFormat()
{
  switch (buttonCountDateTime%3)
  {
      case 1:
         return toString("dd.MM.yyyy hh:mm:ss");
      case 2:
         return toString("MM.dd.yyyy hh:mm:ss");
      default:
         return toString("dddd d MMMM yyyy hh:mm:ss");
  }
}

QString DateTime::updateDateTime()
{
    today = currentDateTime();
    this->swap(today);
    return changeFormat();
}

void DateTime::updateButtonCountDateTime()
{
    buttonCountDateTime++;
}

