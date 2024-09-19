#CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(CinCustomLib)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Specify the include directory as an interface target
add_library(CinCustomLib INTERFACE)

# Add the headers directory to the include path
target_include_directories(CinCustomLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)


# Include GTest (replace the path if installed elsewhere)
find_package(GTest REQUIRED)

# Add the test executable
add_executable(test_main test/test_main.cpp)
target_link_libraries(test_main PRIVATE CinCustomLib GTest::GTest GTest::Main)

enable_testing()
add_test(NAME run_tests COMMAND test_main)