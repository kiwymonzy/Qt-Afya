QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SAMPLE.cpp \
    billingwindow.cpp \
    database.cpp \
    doctorwindow.cpp \
    libraries/qrcode/BitBuffer.cpp \
    libraries/qrcode/QrCode.cpp \
    libraries/qrcode/QrCodeGeneratorDemo.cpp \
    libraries/qrcode/QrCodeGeneratorWorker.cpp \
    libraries/qrcode/QrSegment.cpp \
    main.cpp \
    loginwindow.cpp \
    nursingwindow.cpp \
    receptionwindow.cpp

HEADERS += \
    billingwindow.h \
    database.h \
    doctorwindow.h \
    header.h \
    libraries/qrcode/BitBuffer.hpp \
    libraries/qrcode/QrCode.hpp \
    libraries/qrcode/QrSegment.hpp \
    loginwindow.h \
    nursingwindow.h \
    receptionwindow.h

FORMS += \
    billingwindow.ui \
    database.ui \
    doctorwindow.ui \
    loginwindow.ui \
    nursingwindow.ui \
    receptionwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc \
    img.qrc

DISTFILES += \
    AFYAV2.pro.user \
    app.icns
