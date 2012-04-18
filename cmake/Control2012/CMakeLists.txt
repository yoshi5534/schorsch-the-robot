#--------------------------------------
# CooleConsole 
#--------------------------------------
PROJECT(Control2012)


# qt4
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
ADD_DEFINITIONS(${QT_DEFINITIONS})

QT4_WRAP_CPP(Control2012_HEADERS_MOC ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/maingui.h)
QT4_WRAP_UI(Control2012_FORMS_HEADERS  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/maingui.ui)
FILE(GLOB UIFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/*.ui)

# files 
#FILE(GLOB IncludeFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/*.h)
#FILE(GLOB SourceFiles  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/main.cpp  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/Control2012/maingui.cpp)
FILE(GLOB IncludeFiles ../../src/Control2012/*.h)
FILE(GLOB SourceFiles  ../../src/Control2012/*.cpp)
add_executable(Control2012 ${IncludeFiles} ${Control2012_FORMS_HEADERS} ${UIFiles} ${SourceFiles} ${Control2012_HEADERS_MOC} ) 

include_directories("/usr/include/libreoffice/")
include_directories("/home/oswald/projekt/schorsch-the-robot/src/Control2012/libreoffice/")


target_link_libraries (Control2012 RobotLib)
target_link_libraries (Control2012 ${CMAKE_CURRENT_SOURCE_DIR}/../../src/qextserialport/src/build/libqextserialportd.a)
target_link_libraries (Control2012 ${QT_LIBRARIES})

target_link_libraries (Control2012 "/usr/lib/libreoffice/basis3.4/sdk/lib/libuno_cppu.so")
target_link_libraries (Control2012 "/usr/lib/libreoffice/basis3.4/sdk/lib/libuno_cppuhelpergcc3.so")
target_link_libraries (Control2012 "/usr/lib/libreoffice/basis3.4/sdk/lib/libuno_purpenvhelpergcc3.so")
target_link_libraries (Control2012 "/usr/lib/libreoffice/basis3.4/sdk/lib/libuno_sal.so")
target_link_libraries (Control2012 "/usr/lib/libreoffice/basis3.4/sdk/lib/libuno_salhelpergcc3.so")

	  
