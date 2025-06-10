#include "backend.h"

#include <QTcpSocket>
Backend::Backend(QObject *parent)
    : QObject{parent}
{}

void Backend::send()
{
    socket = new QTcpSocket(this);

    socket->bind();
}

void Backend::receive()
{

}

void Backend::onReadyRead()
{

}
