#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent,QBluetoothSocket *socket) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{

    ui->setupUi(this);
    connect(agent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    agent->start();
    this->socket = socket;
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::deviceDiscovered(const QBluetoothDeviceInfo &device)
{
    if(device.address().toString()=="98:D3:32:30:76:32"){
        ui->listWidget->addItem("GRUP6 GÖZLÜK 1");
    }

}

void SecDialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if(item->text()=="GRUP6 GÖZLÜK 1")
    {
         string ="98:D3:32:30:76:32";
    }

    ui->listWidget->addItem(string);
    static const QString serviceUuid(QStringLiteral("00001101-0000-1000-8000-00805F9B34FB"));
    socket->connectToService(QBluetoothAddress(string), QBluetoothUuid(serviceUuid), QIODevice::ReadWrite);
}
