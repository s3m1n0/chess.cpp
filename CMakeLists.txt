cmake_minimum_required(VERSION 3.28)

project(chess.cpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# chess-core library
add_subdirectory(lib/chess-core)

# adds all header files for each lib
add_subdirectory(include/)

add_subdirectory(cli/)

target_link_libraries(${PROJECT_NAME} PRIVATE chess-core)