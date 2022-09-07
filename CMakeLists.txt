cmake_minimum_required(VERSION 3.10)

# set the project name
project(Piranha VERSION 1.0)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(server-container)
add_subdirectory(lib/spdlog)
add_subdirectory(lib/yaml_cpp)

target_include_directories(${PROJECT_NAME} PUBLIC server-container
	PUBLIC lib/spdlog/include PUBLIC lib/yaml_cpp/include
)

target_link_directories(${PROJECT_NAME} PRIVATE server-container
	PRIVATE lib/spdlog/src PRIVATE lib/yaml_cpp/src
)


target_link_libraries(${PROJECT_NAME} server-container spdlog yaml-cpp)
