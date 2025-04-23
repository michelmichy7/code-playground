#include "backend.h"
#include <QDebug>

backend::backend(QObject *parent)
    : QObject{parent}
{}

void backend::mngFun()
{
    qDebug() << "Hello World";
}
