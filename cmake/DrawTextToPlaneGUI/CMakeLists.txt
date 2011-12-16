#--------------------------------------
# CooleConsole 
#--------------------------------------
PROJECT(DrawTextToPlaneGUI)
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

ADD_DEFINITIONS(${QT_DEFINITIONS})

# files
QT4_WRAP_CPP(DrawTextToPlaneGUI_HEADERS_MOC ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/maingui.h)
QT4_WRAP_UI(DrawTextToPlaneGUI_FORMS_HEADERS  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/maingui.ui)


FILE(GLOB UIFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/*.ui)
FILE(GLOB IncludeFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/*.h)
FILE(GLOB SourceFiles  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/main.cpp  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/DrawTextToPlaneGUI/maingui.cpp)
add_executable(DrawTextToPlaneGUI ${IncludeFiles} ${DrawTextToPlaneGUI_FORMS_HEADERS} ${UIFiles} ${SourceFiles} ${DrawTextToPlaneGUI_HEADERS_MOC} ) 

target_link_libraries (DrawTextToPlaneGUI RobotLib)
target_link_libraries (DrawTextToPlaneGUI ${CMAKE_CURRENT_SOURCE_DIR}/../../src/qextserialport/src/build/libqextserialportd.a)
target_link_libraries (DrawTextToPlaneGUI ${QT_LIBRARIES})
	 
