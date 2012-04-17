#--------------------------------------
# CooleConsole 
#--------------------------------------
PROJECT(OhEsWeihnachtetSehr)
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

ADD_DEFINITIONS(${QT_DEFINITIONS})

# files
QT4_WRAP_CPP(OhEsWeihnachtetSehr_HEADERS_MOC ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/maingui.h)
QT4_WRAP_UI(OhEsWeihnachtetSehr_FORMS_HEADERS  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/maingui.ui)


FILE(GLOB UIFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/*.ui)
FILE(GLOB IncludeFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/*.h)
FILE(GLOB SourceFiles  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/main.cpp  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/OhEsWeihnachtetSehr/maingui.cpp)
add_executable(OhEsWeihnachtetSehr ${IncludeFiles} ${OhEsWeihnachtetSehr_FORMS_HEADERS} ${UIFiles} ${SourceFiles} ${OhEsWeihnachtetSehr_HEADERS_MOC} ) 

target_link_libraries (OhEsWeihnachtetSehr RobotLib)
target_link_libraries (OhEsWeihnachtetSehr ${CMAKE_CURRENT_SOURCE_DIR}/../../src/qextserialport/src/build/libqextserialportd.a)
target_link_libraries (OhEsWeihnachtetSehr ${QT_LIBRARIES})
	 
