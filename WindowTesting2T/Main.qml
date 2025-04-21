import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.FluentWinUI3

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    color: "#1A1A1A"

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
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: {

            backend.handleInput(userInput.text);
        }
        Text {
            id: outputLabel
            color: "white"
            anchors.horizontalCenter: userInput.horizontalCenter
            text: ""
        }

        Connections {
            target: backend
            function onSendResponse(respond) {
                outputLabel.text = respond;
        }
    }
}
}
}
