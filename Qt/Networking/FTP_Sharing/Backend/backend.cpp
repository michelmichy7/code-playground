#include "backend.h"

#include <QTcpSocket>
Backend::Backend(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket(this);

    connect(socket, &QTcpSocket::readyRead, this, &Backend::onReadyRead);
}

void Backend::send()
{
    qDebug() << "C";
    socket = new QTcpSocket(this);
    QHostAddress ipHost(m_text);

    socket->connectToHost(ipHost, 45454);

    socket->write("Hello World");
}

void Backend::receive()
{

}

