#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QListWidget>
#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = 0,QBluetoothSocket *socket=0);

    ~SecDialog();

private slots:

    void deviceDiscovered(const QBluetoothDeviceInfo &device);
    void on_listWidget_itemClicked(QListWidgetItem *item);


private:
    Ui::SecDialog *ui;
    QString string;
    QBluetoothDeviceDiscoveryAgent *agent= new QBluetoothDeviceDiscoveryAgent;
    QBluetoothSocket *socket;
};

#endif // SECDIALOG_H
