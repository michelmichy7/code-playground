import QtQuick
import QtQuck.Controls.Basic

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        Button {
            text: "Send"
            onClicked: backend.send()
        }
        Button {
            text: "Get"
        }
    }
}
