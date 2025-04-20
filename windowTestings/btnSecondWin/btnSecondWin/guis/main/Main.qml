import QtQuick 2.6
import QtQuick.Controls 2.15
import QtQuick.Controls.Material
import btnSecondWin 1.0

Window {
    width: 350
    height: 250
    visible: true
    title: qsTr("Hello World")
    color: "darkslategrey"

    Backend {
        id: backend
    }

    Button {
        text: "Go to the next Window"
        anchors.centerIn: parent
        Material.background: "darkblue"
        Material.foreground: "White"
        onClicked:
            backend.connect_gui1()
    }
}
