cmake_minimum_required(VERSION 3.12)

project(PIPI-RENDERER LANGUAGES CXX C)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)


set (CMAKE_EXPORT_COMPILE_COMMANDS 1)

set (PIPI_SOURCE
    src/pipi_lib/shading/hit_point.cpp
)

set (PIPI_HEADER
    src/pipi_lib/math.h
    src/pipi_lib/shading/hit_point.h
)

# PIPI-LIB
add_library(pipi_lib STATIC
${PIPI_SOURCE}
${PIPI_HEADER}
)

# PIPI-CLI
set(PIPI_CLI_SOURCE
    src/pipi_cli/main.cpp
)
add_executable(pipi_render_cli ${PIPI_CLI_SOURCE})


# Install
