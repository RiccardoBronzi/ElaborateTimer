#ifndef DATETIME_H
#define DATETIME_H
#include <QDateTime>
#include <QString>


class DateTime : public QDateTime{
public:
    DateTime();
    QString changeFormat();
    QString updateDateTime();
    void updateButtonCountDateTime();
private:
    int buttonCountDateTime;
    QDateTime today;
};

#endif // DATETIME_H
