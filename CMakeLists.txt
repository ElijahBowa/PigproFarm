
cmake_minimum_required(VERSION 3.16)
project(PigFarmApp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Executable: CLI prototype
add_executable(pigfarm_cli src/main.cpp)
target_include_directories(pigfarm_cli PRIVATE include)

# Unit test executable
add_executable(unit_tests tests/test_main.cpp)
target_include_directories(unit_tests PRIVATE include)

enable_testing()
add_test(NAME basic COMMAND unit_tests)
