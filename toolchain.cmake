# toolchain.cmake

# target system
set(CMAKE_SYSTEM_NAME Windows)

# compilers
set(CMAKE_C_COMPILER C:/msys64/ucrt64/bin/gcc.exe)
set(CMAKE_CXX_COMPILER C:/msys64/ucrt64/bin/g++.exe)

# Compiler workaround
set(CMAKE_C_COMPILER_WORKS TRUE)
set(CMAKE_CXX_COMPILER_WORKS TRUE)

# make program
set(CMAKE_MAKE_PROGRAM C:/msys64/ucrt64/bin/ninja.exe)
set(CMAKE_GENERATOR "Ninja")