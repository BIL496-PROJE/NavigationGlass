import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    property alias fromStreet: fromStreet
    property alias fromCountry: fromCountry
    property alias toStreet: toStreet
    property alias toCity: toCity
    property alias toCountry: toCountry
    property alias fromCity: fromCity
    property alias goButton: goButton
    property alias clearButton: clearButton
    property alias cancelButton: cancelButton
    property alias gridLayout3: gridLayout3
    property alias gridLayout: gridLayout

    Rectangle {
        id: tabRectangle
        y: 20
        height: tabTitle.height * 2
        color: "#46a2da"
        anchors.rightMargin: 0
        anchors.leftMargin: 0
        anchors.left: parent.left
        anchors.right: parent.right

        Label {
            id: tabTitle
            color: "#ffffff"
            text: qsTr("Route Address")
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    GridLayout {
        id: gridLayout
        x: 107
        y: 51
        width: 424
        height: 419

        Item {
            id: item2
            anchors.rightMargin: 20
            anchors.leftMargin: 20
            anchors.bottomMargin: 20
            anchors.topMargin: 20
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: tabRectangle.bottom

            GridLayout {
                id: gridLayout3
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                rowSpacing: 10
                rows: 1
                columns: 2
                anchors.fill: parent

                Label {
                    id: label6
                    text: qsTr("Gidilecek Adres")
                    font.bold: true
                    anchors.horizontalCenter: parent.horizontalCenter
                    Layout.columnSpan: 2
                }

                Label {
                    id: label4
                    text: qsTr("Semt")
                }

                TextField {
                    id: toStreet
                    Layout.fillWidth: true
                }

                Label {
                    id: label5
                    text: qsTr("Şehir")
                }

                TextField {
                    id: toCity
                    Layout.fillWidth: true
                }

                Label {
                    id: label8
                    text: qsTr("Ulke")
                }

                TextField {
                    id: toCountry
                    Layout.fillWidth: true
                }

                RowLayout {
                    id: rowLayout1
                    Layout.columnSpan: 2
                    Layout.alignment: Qt.AlignRight

                    Button {
                        id: goButton
                        text: qsTr("Uygula")
                    }

                    Button {
                        id: clearButton
                        text: qsTr("Temizle")
                    }

                    Button {
                        id: cancelButton
                        text: qsTr("Iptal")
                    }
                }

                Item {
                    Layout.fillHeight: true
                    Layout.columnSpan: 2
                }
            }
        }
    }

    Connections {
        target: parent
        onClicked: print("clicked")
    }
}
