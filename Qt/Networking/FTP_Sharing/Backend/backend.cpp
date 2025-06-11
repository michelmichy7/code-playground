#include "backend.h"

#include <QTcpSocket>
#include <QTcpServer>

Backend::Backend(QObject *parent)
    : QObject{parent}
{
    connect(rSocket, &QTcpSocket::stateChanged, this, [=](QAbstractSocket::SocketState state) {
        switch (state) {
            case QAbstractSocket::ConnectedState:
                qDebug() << "Client: Connected to server";
                break;
            }
    });
    connect(socket, &QTcpSocket::readyRead, this, [=]() {
        QByteArray data = socket->readAll();
        qDebug() << "Received: " << data;
    });
}

void Backend::startServer()
{
    QTcpServer *server = new QTcpServer(this);
    server->listen(QHostAddress::Any, 45454);
}

void Backend::receive()
{

    if (rSocket->state() == QAbstractSocket::ConnectedState) {

        qDebug() << "Connected already";
        return;
    }
    else {
        connectToServer();
        qDebug() << "Trying to Connect";
    }
}

void Backend::sendData()
{
    qDebug() << "Sending data..";
    rSocket->write("Hello World");
    rSocket->flush();
}
