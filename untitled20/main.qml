import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Column {
        id: column
        width: 640
        height: 445

        Row {
            id: row
            width: 640
            height: 120
        }

        Row {
            id: row1
            width: 640
            height: 400

            Column {
                id: column1
                x: 320
                width: 320
                height: 400
            }

            Column {
                id: column2
                x: 320
                width: 320
                height: 400
            }
        }
    }

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 640
        height: 120
        color: "#1b1818"
        border.color: "#fffcfc"

        Rectangle {
            id: rectangle1
            x: 0
            y: 121
            width: 320
            height: 397
            color: "#1b1717"
            border.color: "#fef8f8"

            Rectangle {
                id: rectangle2
                x: 320
                y: 0
                width: 320
                height: 400
                color: "#130e0e"
                radius: 5
                border.color: "#fefbfb"

                Text {
                    id: element1
                    x: 44
                    y: 44
                    width: 75
                    height: 24
                    color: "#f7f6f6"
                    text: qsTr("Patient Name")
                    font.pixelSize: 12
                }

                Text {
                    id: element2
                    x: 143
                    y: 44
                    color: "#f8f6f6"
                    text: qsTr("")
                    font.pixelSize: 12
                }

                Text {
                    id: element3
                    x: 44
                    y: 79
                    width: 75
                    height: 24
                    color: "#f7f6f6"
                    text: qsTr("Phone Number")
                    font.pixelSize: 12
                }

                Text {
                    id: element4
                    x: 137
                    y: 79
                    width: 75
                    height: 24
                    color: "#f7f6f6"
                    text: qsTr("")
                    font.pixelSize: 12
                }


            }

            Button {
                id: button2
                x: 8
                y: 8
                width: 306
                height: 40
                Text {
                    color:"white"
                    text: "Search"
                    font.pixelSize: 20
                    anchors.centerIn: parent
                }
                background:Rectangle {
                    color: "#251a1a"
                    radius: 5
                    border.color: "#fef6f6"

                }
            }

            Button {
                id: button3
                x: 14
                y: 54
                width: 306
                height: 40
                Text {
                    color:"white"
                    text: qsTr("Patient")
                    font.pixelSize: 20
                    anchors.centerIn: parent
                }
                background:Rectangle {
                    color: "#251a1a"
                    radius: 5
                    border.color: "#fef6f6"

                }
                onClicked: listView.visible=true;

            }

            ListView {
                id: listView
                x: 14
                y: 100
                visible:false
                width: 110
                height: 160
                model: ListModel {
                    ListElement {
                        name: "Radha Krishna"
                        phone: "99019834"
                    }

                    ListElement {
                        name: "Vijay Kittu"
                        phone: "9435689"
                    }

                    ListElement {
                        name: "Sudarsha Behra"
                        phone: "89899889"
                    }

                    ListElement {
                        name: "Srikanth"
                        phone: "737373737"
                    }
                    ListElement {
                        name: "Ramanand"
                        phone: "99019834"
                    }

                    ListElement {
                        name: "Dheerendra Purohit"
                        phone: "9435689"
                    }

                    ListElement {
                        name: "Vikas"
                        phone: "89899889"
                    }

                    ListElement {
                        name: "Surendra"
                        phone: "737373737"
                    }

                }
                delegate: Item {
                    x: 5
                    width: 80
                    height: 40
                    Row {
                        id: row2
                        spacing: 10

                        Text {
                            text: name
                            color:"white"
                            anchors.verticalCenter: parent.verticalCenter
                            font.bold: true
                            MouseArea {
                                anchors.fill:parent
                                onClicked :{
                                    element2.text=name
                                    element4.text = phone
                                }
                            }
                        }
                    }
                }

            }
        }

        Text {
            id: element
            x: 18
            y: 71
            width: 109
            height: 32
            color: "#fffcfc"
            text: qsTr("PATIENT")
            style: Text.Normal
            font.pixelSize: 28
        }

        Button {
            id: button
            x: 396
            y: 58
            background:Rectangle {
                color: "#251a1a"
                radius: 5
                border.color: "#fef6f6"

            }
            width: 104
            height: 40
            Text
            {
                text:"Settings"
                font.pixelSize: 15
                anchors.centerIn: parent
                color:"White"
            }

        }

        Button {
            id: button1
            x: 526
            y: 58
            width: 104
            height: 40
            background:Rectangle {
                color: "#251a1a"
                radius: 5
                border.color: "#fef6f6"

            }
            Text
            {
                text:"Login"
                font.pixelSize: 15
                anchors.centerIn: parent
                color:"White"
            }

           // text: qsTr("LOGIN")
        }
    }
}

