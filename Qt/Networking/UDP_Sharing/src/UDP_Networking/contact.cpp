#include "contact.h"
#include <QDebug>
#include <QUdpSocket>

contact::contact(QObject *parent)
    : QObject{parent}
{}

void contact::textFill(QObject *root)
{
    QObject *textField = m_root->findChild<QObject*>("targetIp");
    qDebug() << textField;
}

void contact::send()
{
    textFill(m_root);
    /*socket = new QUdpSocket(this);
    QByteArray ipIn;




    socket->bind(QHostAddress::AnyIPv4, 0, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    socket->writeDatagram(ipIn, QHostAddress::Broadcast, 45454);*/
}

void contact::receive()
{
    socket = new QUdpSocket(this);
}

