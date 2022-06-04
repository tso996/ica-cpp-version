cmake_minimum_required(VERSION 3.23.1)

project(ica)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(include)

target_link_libraries(${PROJECT_NAME} bbstock mmstock)