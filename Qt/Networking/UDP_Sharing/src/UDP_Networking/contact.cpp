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
    qDebug() << "S";
    process();
    socket = new QUdpSocket(this);
    QByteArray message = "Hello World";
    QHostAddress targetIp(m_text);
    quint16 port = 45454;




    socket->bind(QHostAddress::AnyIPv4, 0, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    socket->writeDatagram(message, targetIp, port);
}

void contact::receive()
{
    socket = new QUdpSocket(this);
}



