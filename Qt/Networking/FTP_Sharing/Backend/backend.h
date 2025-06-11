#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>

class Backend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text MEMBER m_text NOTIFY textChanged)

public:
    explicit Backend(QObject *parent = nullptr);
    Q_INVOKABLE void startServer();
    Q_INVOKABLE void receive();
    Q_INVOKABLE void sendData();

signals:
    void textChanged(const QString &text);

private:
    QTcpServer *server = new QTcpServer(this);
    QString m_text;
    QTcpSocket *rSocket = new QTcpSocket(this);

private slots:
    void onReadyRead() {
        QByteArray data = server->readAll();
        qDebug() << "Received: " << data;
    }
    void connectToServer() {
        QHostAddress ipHost(m_text);
        rSocket->connectToHost(ipHost, 45454);
    }

    void onConnected() {
        qDebug() << "Connected: " << QHostAddress();
    }
};

#endif // BACKEND_H
