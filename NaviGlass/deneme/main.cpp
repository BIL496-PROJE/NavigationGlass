#include "mainwindow.h"
#include "currentlocation.h"
#include <QApplication>
#include <QGeoPositionInfo>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
