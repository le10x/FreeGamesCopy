cmake_minimum_required(VERSION 3.24)

project(FreeGames VERSION 1.0.9)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "No se encontro el SDK de Geode. Verifica el archivo .yml")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

file(GLOB_RECURSE SOURCES 
    src/*.cpp 
    src/*.hpp 
    src/*.h
)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

setup_geode_mod(${PROJECT_NAME})
