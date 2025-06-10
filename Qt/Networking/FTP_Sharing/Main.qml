import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        TextField {
            placeholderText: "Target IP Adress";
            onTextChanged: backend.text = text
        }

        Column {
            Button {
                text: "Send"
                onClicked: backend.send()
            }
            Button {
                text: "Get"
                onClicked: backend.receive()
            }
        }
    }
}
