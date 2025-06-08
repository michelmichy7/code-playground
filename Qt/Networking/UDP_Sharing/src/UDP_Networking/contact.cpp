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
    QByteArray ipIn;




    socket->bind(QHostAddress::AnyIPv4, 0, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    socket->writeDatagram(ipIn, QHostAddress::Broadcast, 45454);
}

void contact::receive()
{
    socket = new QUdpSocket(this);
}



