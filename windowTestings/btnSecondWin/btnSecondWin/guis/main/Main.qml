import QtQuick 2.6
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15

Window {
    width: 350
    height: 250
    visible: true
    title: qsTr("Hello World")
    color: "darkslategrey"

    Button {
        text: "Go to the next Window"
        anchors.centerIn: parent
        Material.background: "darkblue"
        Material.foreground: "White"
        onClicked:
            myHandler.qDebug()
    }
}
