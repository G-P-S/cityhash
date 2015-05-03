cmake_minimum_required(VERSION 2.8)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(GoProCommon)

add_definitions(-D_BSD_SOURCE)

set(PROJ_NAME CityHash)
string(TOUPPER ${PROJ_NAME} PROJ_UPPER)
project(${PROJ_NAME})

set(${PROJ_UPPER}_LIBRARY_TYPE SHARED STATIC)

set(${PROJ_UPPER}_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
   )

gopro_glob(${PROJ_UPPER}_SOURCES *.cc .)
gopro_glob(${PROJ_UPPER}_HEADERS *.h .)

add_gopro_library(${PROJ_NAME})

