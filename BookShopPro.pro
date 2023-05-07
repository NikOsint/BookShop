QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# QXlsx code for Application Qt project
QXLSX_PARENTPATH=./QXlsx/         # current QXlsx path
QXLSX_HEADERPATH=./QXlsx/header/  # current QXlsx header path
QXLSX_SOURCEPATH=./QXlsx/source/  # current QXlsx source path
include(./QXlsx/QXlsx.pri)

SOURCES += \
    src/book.cpp \
    src/bookshop.cpp \
    src/educationbook.cpp \
    src/fictionbook.cpp \
    src/main.cpp \
    src/mainwin.cpp \
    src/sciencebook.cpp

HEADERS += \
    include/book.h \
    include/bookshop.h \
    include/consts.h \
    include/educationbook.h \
    include/fictionbook.h \
    include/mainwin.h \
    include/sciencebook.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target