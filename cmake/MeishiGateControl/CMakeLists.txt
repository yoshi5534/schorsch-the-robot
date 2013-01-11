#--------------------------------------
# MeishiGateControl 
#--------------------------------------

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

# files
FILE(GLOB IncludeFiles ../../src/MeishiGateControl/*.h)
FILE(GLOB SourceFiles  ../../src/MeishiGateControl/*.cpp)
add_executable(MeishiGateControl ${IncludeFiles} ${SourceFiles}) 

target_link_libraries (MeishiGateControl RobotLib)
target_link_libraries (MeishiGateControl "/usr/local/lib/libserial.so")
target_link_libraries (MeishiGateControl ${QT_LIBRARIES})
	 
