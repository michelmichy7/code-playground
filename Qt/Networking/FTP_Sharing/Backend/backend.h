#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QudpSocket>

class Backend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text MEMBER m_text NOTIFY textChanged)

public:
    explicit Backend(QObject *parent = nullptr);
    Q_INVOKABLE void send();
    Q_INVOKABLE void receive();
    void onReadyRead();

signals:
    void textChanged(const QString &text);

private:
    QUdpSocket* socket = nullptr;
    QString m_text;
};

#endif // BACKEND_H
