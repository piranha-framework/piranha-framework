cmake_minimum_required(VERSION 2.8.12)
project(piranha-framework)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(main main.c)
#target_link_libraries(src/*.h ${CONAN_LIBS})

