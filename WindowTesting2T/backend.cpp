#include "backend.h"
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject{parent}
{}

void Backend::handleInput(const QString &text)
{
    qDebug() << "I'm being called!";
}
