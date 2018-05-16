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

    void on_bluetooth_connection_button_clicked(); /**bluetooth listesi icin acilan sayfa*/

    void on_adrese_git_butonu_clicked(); /*adrese git butonu*/

    void on_konum_izle_butonu_clicked(); /*konum izle butonu icin*/

private:
    Ui::MainWindow *ui;
    SecDialog *secdialog;
    QBluetoothSocket *socket;
    QString string;
   bool k = false;
};


#endif // MAINWINDOW_H
