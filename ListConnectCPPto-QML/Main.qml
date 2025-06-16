import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListView {
        width: 200; height: 300;
        model: myModel
        delegate: Text {
            text: modelData
            color: "black"
        }
    }
}
