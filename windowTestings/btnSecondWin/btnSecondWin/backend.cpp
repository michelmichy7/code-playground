#include "backend.h"
#include <QQmlApplicationEngine>
#include <QDebug>

Backend::Backend(QQmlApplicationEngine *engine, QObject *parent)
    : QObject{parent}, m_engine(engine)
{}

void Backend::connect_gui1()
{
    qDebug() << "Hello World!";

    m_engine->load(QUrl(QStringLiteral("qrc:/qt/qml/btnSecondWin/guis/gui_2/gui_2.qml")));
}
