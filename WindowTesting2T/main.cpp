#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "backend.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Backend testClass;

    QQmlContext * rootContext = engine.rootContext();
    rootContext->setContextProperty("backend", &testClass);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

        engine.loadFromModule("WindowTesting2T", "Main");




    return app.exec();
}
