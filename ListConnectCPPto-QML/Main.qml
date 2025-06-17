import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Grid {
        width: 200; height: 300;
        anchors.centerIn: parent
        spacing: 20
        Repeater {
            model: myModel
        delegate:
                Rectangle {
                width: 50; height: 50
                color: "black"
                }
        }
        }
    }
