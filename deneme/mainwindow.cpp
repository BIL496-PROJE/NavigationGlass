#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtBluetooth>
#include "secdialog.h"
using namespace std;

//RX -> tx
//tx -> Rx
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_on_clicked(){
    QString qs=ui->lineEdit->text();
    socket->write(qs.toLocal8Bit()+"*");
}

void MainWindow::on_pushButton_clicked()
{
    secdialog=new SecDialog(this,socket);
    secdialog->setGeometry(0,0,1100,2500);
    secdialog->show();

}
