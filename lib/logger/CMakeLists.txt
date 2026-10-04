add_library(logger)

target_include_directories(logger PUBLIC "include")

target_sources(logger PRIVATE "src/logger.c")

message(STATUS "Building application loggers")
