import QtQuick
import QtQuick.Controls.Basic

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        anchors.centerIn: parent


        Column {
            TextField {
                placeholderText: "Target IP Adress";
                onTextChanged: backend.text = text
            }
            anchors.centerIn: parent
            spacing: 20

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Send"
                onClicked: backend.startServer()
                onTextChanged: backend.text = text
            }
            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Get"
                onClicked: backend.receive()
                onTextChanged: backend.text = text
            }
            Button {
                text : "Send Hello World";
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: backend.sendData()
            }
        }
    }
}
