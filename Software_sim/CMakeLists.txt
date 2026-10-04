cmake_minimum_required(VERSION 3.16)
project(hack_cpu_software_sim C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>/software_sim/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>/software_sim/lib")
option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Custom Libaries

add_executable(
    hack_cpu_software_sim.bin
    MACOSX_BUNDLE
    Software_sim/main.c
)