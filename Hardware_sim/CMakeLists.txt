cmake_minimum_required(VERSION 3.16)
project(hack_cpu_hardware_sim C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>/hardware_sim/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>/hardware_sim/lib")
option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Custom Libaries
add_subdirectory(${LIB_PATH}/logger EXCLUDE_FROM_ALL)

add_executable(
    hack_cpu_hardware_sim.bin
    MACOSX_BUNDLE
    Hardware_sim/main.c
)

target_link_libraries(
    hack_cpu_hardware_sim.bin 
    PUBLIC 
    logger
)
