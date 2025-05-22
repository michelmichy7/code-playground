import QtQuick
import QtQuick.Window
import QtQuick.Effects

Window {
    visible: true
    width: 640
    height: 480
    color: "transparent"
    flags: Qt.FramelessWindowHint

    Image {
        id: imageSource
        source: "https://picsum.photos/800/600"
        anchors.fill: parent
        visible: false
    }


    Rectangle {
        anchors.fill: parent
        color: "#22222288"
        radius: 20
    }
}
