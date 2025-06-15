import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        width: 500; height: 500;
        anchors.centerIn: parent;

        ListView {
            anchors.fill: parent
            model: ListModel {
                id: visualModel
                ListElement { name: "Apple" }
                ListElement { name: "Pineapple" }
            }

            delegate: Rectangle {
                width: 50
                height: 50
                color: blue
                border.color: "black"
                Text {
                    anchors.centerIn: parent
                    text: name
                    color: "black"
                }
            }
        }
    }
}
