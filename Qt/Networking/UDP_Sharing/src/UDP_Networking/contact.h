#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class contact : public QObject
{
    Q_OBJECT
public:
    explicit contact(QObject *parent = nullptr);
    Q_INVOKABLE void connect();

signals:
};

#endif // CONTACT_H
