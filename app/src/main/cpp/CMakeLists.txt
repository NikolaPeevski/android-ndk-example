cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

add_library(hellojni SHARED
            hellojni.cpp)

# Include libraries needed for hello-jni lib
target_link_libraries(hellojni
                      android
                      log)