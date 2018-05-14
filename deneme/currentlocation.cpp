#include "currentlocation.h"
#include "ui_currentlocation.h"

#include <QGeoCoordinate>
#include <QApplication>
#include <QDesktopWidget>

#include <QCoreApplication>

#include <QDebug>

using namespace  std;

CurrentLocation::CurrentLocation(QWidget *parent)
 : QMainWindow(parent), m_pLocationInfo(NULL), m_pLabel(NULL)
{
 m_pLabel = new QLabel("",this);
 m_pLabel->setGeometry(QApplication::desktop()->screenGeometry());
 startLocationAPI();
}

CurrentLocation::~CurrentLocation()
{

}

void CurrentLocation::startLocationAPI()
{
 // Obtain the location data source if it is not obtained already
 if (!m_pLocationInfo)
 {
 m_pLocationInfo =
 QGeoPositionInfoSource::createDefaultSource(this);

 //Select positioning method
 m_pLocationInfo->setPreferredPositioningMethods(QGeoPositionInfoSource::NonSatellitePositioningMethods);

 // When the position is changed the positionUpdated function is called
 connect(m_pLocationInfo, SIGNAL (positionUpdated(QGeoPositionInfo)),
 this, SLOT (positionUpdated(QGeoPositionInfo)));

 // Start listening for position updates
 m_pLocationInfo->startUpdates();
 }
}

void CurrentLocation::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
 if (geoPositionInfo.isValid())
 {
 // Get the current location coordinates
 QGeoCoordinate geoCoordinate = geoPositionInfo.coordinate();
 qreal latitude = geoCoordinate.latitude();
 qreal longitude = geoCoordinate.longitude();

 m_pLabel->setText( QString("Latitude: %1 Longitude: %2").arg(latitude).arg(longitude) );
 }

}
