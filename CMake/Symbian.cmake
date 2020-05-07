INCLUDE(CMakeForceCompiler)
 
SET(CMAKE_SYSTEM_NAME Generic)
SET(CMAKE_SYSTEM_PROCESSOR arm)
SET(CMAKE_SYSTEM_VERSION 1)
 
SET(CMAKE_C_COMPILER arm-none-symbianelf-gcc)
SET(CMAKE_CXX_COMPILER arm-none-symbianelf-g++)
SET(CMAKE_LINKER arm-none-symbianelf-ld)
 
SET(COMMON_FLAGS "-std=c++11 -nostdinc -nostdlib")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS}")