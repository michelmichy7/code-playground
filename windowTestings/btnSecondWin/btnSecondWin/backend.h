#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QQmlApplicationEngine>

class Backend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit Backend(QQmlApplicationEngine *engine, QObject *parent = nullptr);
    Q_INVOKABLE void connect_gui1();

private:
    QQmlApplicationEngine *m_engine;
};

#endif // BACKEND_H
