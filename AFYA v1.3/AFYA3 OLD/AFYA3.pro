QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    libraries/qrcode/BitBuffer.cpp \
    libraries/qrcode/QrCode.cpp \
    libraries/qrcode/QrCodeGeneratorDemo.cpp \
    libraries/qrcode/QrCodeGeneratorWorker.cpp \
    libraries/qrcode/QrSegment.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    newvisit.cpp

HEADERS += \
    database.h \
    header.h \
    libraries/qrcode/BitBuffer.hpp \
    libraries/qrcode/QrCode.hpp \
    libraries/qrcode/QrSegment.hpp \
    login.h \
    mainwindow.h \
    newvisit.h

FORMS += \
    database.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
