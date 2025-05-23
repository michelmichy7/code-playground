#include "backend.h"

//#include <Boost/>

#include "QDebug"

Backend::Backend(QObject *parent)
    : QObject{parent}
{}

void Backend::doAction()
{
    qDebug() << "Working";
}
