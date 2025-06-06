import QtQuick
import QtQuick.Controls.Basic
import ConnectLib 1.0


Window {
    width: 500
    height: 500
    visible: true

    Connect {
        id: connectUdp
    }
    Rectangle {
        anchors.fill: parent
        anchors.centerIn: parent

        Button {
            anchors.centerIn: parent
            text: "Start"
            onClicked: {
                connectUdp.connect()
            }
        }
    }
}
