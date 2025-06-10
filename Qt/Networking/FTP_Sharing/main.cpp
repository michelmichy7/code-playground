#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Backend/backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Backend backend;
    engine.rootContext()->setContextProperty("backend", &backend);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("FTP_Sharing", "Main");

    return app.exec();
}
