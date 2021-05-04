cmake_minimum_required(VERSION 3.10)
#set the project name 
project (Tutorial)

#ADD_SUBDIRECTORY (gtest-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# add the executable
add_executable(Tutorial testHttp.cpp)

target_link_libraries(Tutorial gtest gtest_main pthread)
add_test(Tutorial Tutorial)
