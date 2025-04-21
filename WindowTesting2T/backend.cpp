#include "backend.h"
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject{parent}
{}

class users {
public:
    QString user_name;
};

void Backend::handleInput(const QString &text)
{
    users user;

    user.user_name = text;
    qDebug() << user.user_name;

    if (user.user_name == "Michal") {
        QString respond = "Right";
        emit sendResponse(respond);
    }
}
