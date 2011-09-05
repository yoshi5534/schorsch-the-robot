#--------------------------------------
# CooleConsole 
#--------------------------------------

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

# files
FILE(GLOB IncludeFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/CooleConsole/*.h)
FILE(GLOB SourceFiles  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/CooleConsole/*.cpp)
add_executable(CooleConsole ${IncludeFiles} ${SourceFiles}) 

target_link_libraries (CooleConsole RobotLib)
target_link_libraries (CooleConsole ${CMAKE_CURRENT_SOURCE_DIR}/../../src/qextserialport/src/build/libqextserialportd.a)
target_link_libraries (CooleConsole ${QT_LIBRARIES})
	 
