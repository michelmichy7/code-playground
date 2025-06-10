#include "contact.h"
#include <QDebug>
#include <QUdpSocket>

contact::contact(QObject *parent)
    : QObject{parent}
{}

void contact::process()
{
    qDebug() << "ip: " << m_text;
}

void contact::send()
{
    process();
    socket = new QUdpSocket(this);
    QByteArray message = "Hello World";
    QHostAddress targetIp(m_text);
    quint16 port = 45454;


    socket->writeDatagram(message, targetIp, port);
}

void contact::onReadyRead() {
    QByteArray datagram;
    QHostAddress sender;
    quint16 port;

    while (socket->hasPendingDatagrams()) {
        datagram.resize(socket->pendingDatagramSize());
        socket->readDatagram(datagram.data(), datagram.size(), &sender, &port);

        qDebug() << "Received:" << datagram << "from:" << sender.toString() << port;
    }
}

void contact::receive()
{
    socket = new QUdpSocket(this);
    QHostAddress targetIp(m_text);

    bool success = socket->bind(targetIp, 45454);

    if (!success) {
        qDebug() << "Bind failed:" << socket->errorString();
        return;
    }

    connect(socket, &QUdpSocket::readyRead, this, &contact::onReadyRead);
}



