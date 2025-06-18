import QtQuick
import QtQuick.Controls


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Grid {
        anchors.centerIn: parent
        spacing: 20
        Repeater {
            model: myModel
            delegate:
                Button {
                    width: 100; height: 100
                    background: Rectangle {
                        anchors.fill: parent
                        color: "black"
                    }
                    onClicked: {
                        myModel.handleItemClick(index)
                    }
                    Text {
                        z: 3
                        color: "white"
                        anchors.centerIn: parent
                        text: model.display

                    }

                }
        }
        }
    }
