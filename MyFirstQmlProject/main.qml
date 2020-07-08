import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 400
    height: 400
    title: qsTr("My First Qml App")
    property bool flag: true
    maximumHeight: 400
    maximumWidth: 400
    minimumHeight: 400
    minimumWidth: 400

    Rectangle{

        height: 200
        width: 200
        radius: 200
        x: 100
        y: 100
        color: "red"
        border.color: "black"

        border.width: 2
        MouseArea{
        anchors.fill: parent
        onClicked: {
        if(flag==true){
        parent.color="blue"
            flag=false;

        }
        else{
            parent.color="red";
            flag=true
        }
        }
        }
        Text {
            anchors.fill: parent
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            text: ("Hello Qml")
            color: "white"
            font.bold: true
        }
    }

}
