#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = nullptr);

    Q_INVOKABLE void handleInput(const QString &text);
signals:
    void sendResponse(const QString &response);
};

#endif // BACKEND_H
