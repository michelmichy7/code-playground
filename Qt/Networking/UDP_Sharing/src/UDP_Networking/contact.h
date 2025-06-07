#ifndef CONTACT_H
#define CONTACT_H

#include <QUdpSocket>

#include <QObject>

class contact : public QObject
{
    Q_OBJECT
public:
    explicit contact(QObject *parent = nullptr);
    Q_INVOKABLE void send();
    Q_INVOKABLE void receive();

public slots:
    void textFill(QObject *root);

private:
    QUdpSocket* socket = nullptr;
    QObject *m_root = nullptr;


signals:
};

#endif // CONTACT_H
