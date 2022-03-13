QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    beddialog.cpp \
    doctor.cpp \
    inpatient.cpp \
    laboratory.cpp \
    libraries/cpp/BitBuffer.cpp \
    libraries/cpp/QrCode.cpp \
    libraries/cpp/QrCodeGeneratorDemo.cpp \
    libraries/cpp/QrCodeGeneratorWorker.cpp \
    libraries/cpp/QrSegment.cpp \
    login.cpp \
    main.cpp \
    menu.cpp \
    registration.cpp

HEADERS += \
    beddialog.h \
    doctor.h \
    headers.h \
    inpatient.h \
    laboratory.h \
    libraries/cpp/BitBuffer.hpp \
    libraries/cpp/QrCode.hpp \
    libraries/cpp/QrSegment.hpp \
    login.h \
    menu.h \
    registration.h

FORMS += \
    beddialog.ui \
    doctor.ui \
    inpatient.ui \
    laboratory.ui \
    login.ui \
    menu.ui \
    registration.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES += \
    SMS.py

ICONS = :/img/img/icon.ico

