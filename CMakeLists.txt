cmake_minimum_required(VERSION 3.10)

# set the project name
project(Piranha VERSION 1.0)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(server-container)

target_include_directories(${PROJECT_NAME} PUBLIC server-container)

target_link_directories(${PROJECT_NAME} PRIVATE server-container)


target_link_libraries(${PROJECT_NAME} server-container)
