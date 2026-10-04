cmake_minimum_required(VERSION 3.16)
project(hack_simulators C)

option(BUILD_SOFTWARE_SIM "Builds the HACK Software Simulator" OFF)
option(BUILD_HARDWARE_SIM "Builds the HACK Hardware Simulator" OFF)

set(LIB_PATH "${PROJECT_SOURCE_DIR}/lib")

if(${BUILD_SOFTWARE_SIM})
    message(STATUS "Starting Build for Software Simulator.")
    include("Software_sim/CMakeLists.txt")
endif()

if(${BUILD_HARDWARE_SIM})
    message(STATUS "Starting Build for Hardware Simulator.")
    include("Hardware_sim/CMakeLists.txt")
endif()
