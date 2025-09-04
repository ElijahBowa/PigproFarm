cmake_minimum_required(VERSION 3.10)

project(PigFarmApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(SQLite3 REQUIRED)

add_executable(PigFarmApp
    src/main.cpp
    src/database.cpp
)

target_include_directories(PigFarmApp PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(PigFarmApp Qt5::Widgets SQLite::SQLite3)
