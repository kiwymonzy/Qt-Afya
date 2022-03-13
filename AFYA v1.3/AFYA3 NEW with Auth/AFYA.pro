QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountlogic.cpp \
    adminaccountwindow.cpp \
    authenticatelogic.cpp \
    billingwindow.cpp \
    databaseconnection.cpp \
    loginwindow.cpp \
    main.cpp \
    receiptionwindow.cpp


HEADERS += \
    accountlogic.h \
    adminaccountwindow.h \
    authenticatelogic.h \
    billingwindow.h \
    databaseconnection.h \
    header.h \
    loginwindow.h \
    receiptionwindow.h


FORMS += \
    adminaccountwindow.ui \
    billingwindow.ui \
    loginwindow.ui \
    receiptionwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.txt

RESOURCES += \
    img.qrc
