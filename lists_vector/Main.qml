import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Fusion
import QtQml.Models

Window {
    width: 450
    height: 450
    visible: true
    title: qsTr("Hello World")
    color: "#0c0c0c"

    Rectangle {
        TextArea {
            id: name
             placeholderText: "Name:"
             anchors.centerIn: parent
        }
        TextArea {
             id: password
             placeholderText: "Password:"
             anchors.centerIn: parent
        }

    }
}
