#CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(CinCustomLib)

# Set C++ compilers
set(CMAKE_C_COMPILER C:/msys64/ucrt64/bin/gcc.exe)
set(CMAKE_CXX_COMPILER C:/msys64/ucrt64/bin/g++.exe)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory for headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# Create the static library
add_library(CinCustomLib STATIC
    src/cin_custom.cpp
)

# Include GTest (replace the path if installed elsewhere)
find_package(GTest REQUIRED)

# Add the test executable
add_executable(test_main test/test_main.cpp)
target_link_libraries(test_main PRIVATE CinCustomLib GTest::GTest GTest::Main)

enable_testing()
add_test(NAME run_tests COMMAND test_main)