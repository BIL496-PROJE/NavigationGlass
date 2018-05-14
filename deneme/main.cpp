#include "mainwindow.h"
#include "currentlocation.h"
#include <QApplication>
#include <QGeoPositionInfo>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGeoPositionInfo inf;
    MainWindow w;
    CurrentLocation c;
    c.positionUpdated(inf);

    w.show();

    return a.exec();
}
