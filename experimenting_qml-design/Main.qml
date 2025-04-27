import QtQuick
import QtQuick.Controls
import QtQuick.Effects


ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Halo"

    // Colorful background
    Rectangle {
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#ff7e5f" }
            GradientStop { position: 1.0; color: "#feb47b" }
        }
    }

    // Card
    Rectangle {
        width: 300
        height: 150
        radius: 20
        anchors.centerIn: parent
        color: "#66ffffff" // semi-transparent white

        MultiEffect {
            anchors.fill: parent
            source: parent
            blurEnabled: true
            blur: 0.2
            shadowEnabled: true
            shadowColor: "#80000080"
            shadowBlur: 0.5
            shadowHorizontalOffset: 0
            shadowVerticalOffset: 5
        }
    }
}

