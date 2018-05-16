#-------------------------------------------------
#
# Project created by QtCreator 2017-03-19T09:50:06
#
#-------------------------------------------------
QT       += core gui
QT+= bluetooth
QT += positioning
QT += quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = NaviGlass
TEMPLATE = app
SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp
HEADERS  += mainwindow.h \
    secdialog.h
FORMS    += mainwindow.ui \
    secdialog.ui

CONFIG += mobility
MOBILITY += location

RESOURCES += \
    mapviewer.qrc

OTHER_FILES +=mapviewer.qml \
    helper.js \
    map/MapComponent.qml \
    map/MapSliders.qml \
    map/Marker.qml \
    map/CircleItem.qml \
    map/RectangleItem.qml \
    map/PolylineItem.qml \
    map/PolygonItem.qml \
    map/ImageItem.qml \
    map/MiniMap.qml \
    menus/ItemPopupMenu.qml \
    menus/MainMenu.qml \
    menus/MapPopupMenu.qml \
    menus/MarkerPopupMenu \
    forms/Geocode.qml \
    forms/GeocodeForm.ui.qml\
    forms/Message.qml \
    forms/MessageForm.ui.qml \
    forms/ReverseGeocode.qml \
    forms/ReverseGeocodeForm.ui.qml \
    forms/RouteCoordinate.qml \
    forms/Locale.qml \
    forms/LocaleForm.ui.qml \
    forms/RouteAddress.qml \
    forms/RouteAddressForm.ui.qml \
    forms/RouteCoordinateForm.ui.qml \
    forms/RouteList.qml \
    forms/RouteListDelegate.qml \
    forms/RouteListHeader.qml
