cmake_minimum_required(VERSION 3.10)
project(template)

set(HEADERS
    include/template.h)

set(SOURCES
    src/template.cc)

add_library(${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20)

target_include_directories(${PROJECT_NAME}
    PUBLIC include
    PRIVATE src)

add_subdirectory(ut)
