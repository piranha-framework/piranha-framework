cmake_minimum_required(VERSION 3.10)

# set the project name
project(Piranha VERSION 1.0)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(server-container)
add_subdirectory(lib/spdlog)

target_include_directories(${PROJECT_NAME} PUBLIC server-container
    PUBLIC lib/spdlog/include
)

target_link_directories(${PROJECT_NAME} PRIVATE server-container
PRIVATE lib/spdlog/src
)


target_link_libraries(${PROJECT_NAME} server-container spdlog)
