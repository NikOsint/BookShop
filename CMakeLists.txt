cmake_minimum_required(VERSION 3.23)
project(bookshop)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
    REQUIRED
)

set(SOURCES
    src/book.cpp
    src/bookshop.cpp
    src/educationbook.cpp
    src/fictionbook.cpp
    src/main.cpp
    src/mainwin.cpp
    src/sciencebook.cpp
)

set(HEADERS
    include/consts.h
    include/book.h
    include/bookshop.h
    include/educationbook.h
    include/fictionbook.h
    include/mainwin.h
    include/sciencebook.h
)

#set(QXLSX_SOURCES
#    QXlsx/source/xlsxabstractooxmlfile.cpp
#    QXlsx/source/xlsxabstractsheet.cpp
#    QXlsx/source/xlsxcell.cpp
#    QXlsx/source/xlsxcellformula.cpp
#    QXlsx/source/xlsxcelllocation.cpp
#    QXlsx/source/xlsxcellrange.cpp
#    QXlsx/source/xlsxcellreference.cpp
#    QXlsx/source/xlsxchart.cpp
#    QXlsx/source/xlsxchartsheet.cpp
#    QXlsx/source/xlsxcolor.cpp
#    QXlsx/source/xlsxconditionalformatting.cpp
#    QXlsx/source/xlsxcontenttypes.cpp
#    QXlsx/source/xlsxdatavalidation.cpp
#    QXlsx/source/xlsxdatetype.cpp
#    QXlsx/source/xlsxdocpropsapp.cpp
#    QXlsx/source/xlsxdocpropscore.cpp
#    QXlsx/source/xlsxdocument.cpp
#    QXlsx/source/xlsxdrawinganchor.cpp
#    QXlsx/source/xlsxdrawing.cpp
#    QXlsx/source/xlsxformat.cpp
#    QXlsx/source/xlsxmediafile.cpp
#    QXlsx/source/xlsxnumformatparser.cpp
#    QXlsx/source/xlsxrelationships.cpp
#    QXlsx/source/xlsxrichstring.cpp
#    QXlsx/source/xlsxsharedstrings.cpp
#    QXlsx/source/xlsxsimpleooxmlfile.cpp
#    QXlsx/source/xlsxstyles.cpp
#    QXlsx/source/xlsxtheme.cpp
#    QXlsx/source/xlsxutility.cpp
#    QXlsx/source/xlsxworkbook.cpp
#    QXlsx/source/xlsxworksheet.cpp
#    QXlsx/source/xlsxzipreader.cpp
#    QXlsx/source/xlsxzipwriter.cpp
#)

#add_executable(bookshop ${SOURCES} ${HEADERS} ${QXLSX_SOURCES})

add_executable(bookshop ${SOURCES} ${HEADERS})

target_include_directories(bookshop PUBLIC include/)
#target_include_directories(bookshop PUBLIC QXlsx/header/)

target_link_libraries(bookshop
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)
