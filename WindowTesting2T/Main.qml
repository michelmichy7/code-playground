import QtQuick 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    color: "darkslategrey"

    Column {
        anchors.centerIn: parent
        spacing: 10

        TextField {
            id: userInput
            placeholderText: "Name"
            width: 200
        }

        Button {
            text: "Submit"
            anchors.horizontalCenter: userInput.horizontalCenter
            onClicked: backend.handleInput(userInput.text)
        }
    }
}
