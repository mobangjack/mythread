cmake_minimum_required(VERSION 2.8)
project(mythread)

if(NOT WIN32)
ADD_DEFINITIONS("-std=c++0x -O3 -lpthread")
endif(NOT WIN32)

FILE(GLOB sourcefiles "*.cpp")
add_executable( runmythread ${sourcefiles} )
target_link_libraries( runmythread pthread)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

add_library(mythread mythread.cpp mylock.cpp myevent.cpp)
target_link_libraries( mythread pthread)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
