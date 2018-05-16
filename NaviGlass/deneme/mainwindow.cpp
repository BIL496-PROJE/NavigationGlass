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

/**bluetooth listesi icin acilan sayfa*/
void MainWindow::on_bluetooth_connection_button_clicked()
{
    secdialog=new SecDialog(this,socket);
    secdialog->setGeometry(0,0,1100,2500);
    secdialog->show();
}

/*adrese git butonu*/
void MainWindow::on_adrese_git_butonu_clicked()
{
    QString qs=ui->lineEdit->text();
    socket->write(qs.toLocal8Bit()+"*");
}
/*konum izle butonu icin*/
void MainWindow::on_konum_izle_butonu_clicked()
{

}
