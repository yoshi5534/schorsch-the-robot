 
#--------------------------------------
# RobotLib Library
#--------------------------------------

# files
FILE(GLOB IncludeFiles ${CMAKE_CURRENT_SOURCE_DIR}/../../src/RobotLib/*.h)
FILE(GLOB SourceFiles  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/RobotLib/*.cpp)
add_library(RobotLib ${IncludeFiles} ${SourceFiles}) 

	
	
	
	