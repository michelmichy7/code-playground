import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic
import Monky

Window {
        width: 500
        height: 500
        visible: true
        title: qsTr("Hello World")
        color: "#141414"

        Backend {
            id: backend
        }

    Rectangle {
        width: 250
        height: 250

        anchors.centerIn: parent
        color: "#141414"

        Button {
            anchors.centerIn: parent
            text: "Start Action"
            onClicked: backend.doAction()
        }
    }
}
