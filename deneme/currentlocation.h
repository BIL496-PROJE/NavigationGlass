#ifndef CURRENTLOCATION_H
#define CURRENTLOCATION_H

#include <QMainWindow>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QLabel>

namespace Ui {
 class CurrentLocation;
}

class CurrentLocation : public QMainWindow
{
 Q_OBJECT
public:

explicit CurrentLocation(QWidget *parent = 0);

 virtual ~CurrentLocation();

public slots:
 /*
 * Called when the current position is updated.
 *
 *return nothing
*/
void positionUpdated(QGeoPositionInfo geoPositionInfo);

private:

/*
* Start listening for position changes
*
*return nothing
*/
 void startLocationAPI();

private:
 QGeoPositionInfoSource* m_pLocationInfo;

QLabel* m_pLabel;

};

#endif // MAINWINDOW_H
