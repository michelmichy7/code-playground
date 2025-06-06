import QtQuick
import QtQuick.Controls.Basic
import ConnectLib 1.0


Window {
    width: 500
    height: 500

    Connect {
        id: connectUdp
    }
    Rectangle {
        anchors.fill: parent

        Button {
            text: "Start"
            onClicked: {
                //connectUdp.connec
            }
        }
    }
}
