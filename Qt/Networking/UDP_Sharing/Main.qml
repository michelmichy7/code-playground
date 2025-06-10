import QtQuick
import QtQuick.Controls.Basic
//import ConnectLib 1.0


Window {
    width: 500
    height: 500
    visible: true

    /*Connect {
        id: connectUdp
    }*/

    Rectangle {
        anchors.fill: parent
        anchors.centerIn: parent

        Text {
            text: "Target IP address:"
            anchors.horizontalCenter: parent.horizontalCenter
            y: 150
        }

        Column {
            spacing: 20
            anchors.centerIn: parent


            TextField {
                id: textField
                width: 130
                height: 30
                placeholderText: "192.xxx.xxx.xxx"
                cursorVisible: true
                anchors.horizontalCenter: parent.horizontalCenter
                onTextChanged: contact.text = text
            }

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Send"
                onClicked: contact.send()
            }
            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Receive"
                onClicked: contact.receive()

            }

        }
    }
}
