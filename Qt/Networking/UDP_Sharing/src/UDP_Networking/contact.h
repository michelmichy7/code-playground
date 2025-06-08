#ifndef CONTACT_H
#define CONTACT_H

#include <QUdpSocket>
#include <QString>
#include <QObject>

class contact : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text MEMBER m_text NOTIFY textChanged)

public:
    explicit contact(QObject *parent = nullptr);
    Q_INVOKABLE void send();
    Q_INVOKABLE void receive();
    Q_INVOKABLE void process();

signals:

    void textChanged(const QString &text);

private:
    QUdpSocket* socket = nullptr;
    QString m_text;

signals:
};

#endif // CONTACT_H
