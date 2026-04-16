cmake_minimum_required(VERSION 3.24)
project(FreeGames VERSION 1.0.9)

find_package(Geode REQUIRED)

# Busca .cpp, .hpp y .h en todas las subcarpetas (Meltdown, World, etc.)
file(GLOB_RECURSE SOURCES 
    src/*.cpp 
    src/*.hpp 
    src/*.h
)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
setup_geode_mod(${PROJECT_NAME})
