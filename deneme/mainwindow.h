#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<QBluetoothDeviceDiscoveryAgent>
#include<QBluetoothSocket>
#include<QListWidget>
#include "secdialog.h"




namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_find_clicked();

    void on_on_clicked();


    void on_lineEdit_returnPressed();


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secdialog;
    //QBluetoothDeviceDiscoveryAgent *agent = new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
    QString string;
   bool k = false;
};


#endif // MAINWINDOW_H
