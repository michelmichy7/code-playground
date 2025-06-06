#include "contact.h"
#include <QDebug>

contact::contact(QObject *parent)
    : QObject{parent}
{}

void contact::connect()
{
    qDebug() << "Hello";
}

