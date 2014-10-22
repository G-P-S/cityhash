cmake_minimum_required(VERSION 2.8)

set(PROJ_NAME testHash)
string(TOUPPER ${PROJ_NAME} PROJ_UPPER)
project(${PROJ_NAME})

include_directories(
    ${CMAKE_SOURCE_DIR}/extern/cityhash/src
    )

set(${PROJ_UPPER}_LINK_LIBRARIES
    CityHash_static )

gopro_glob(${PROJ_UPPER}_SOURCES *.cpp ${CMAKE_CURRENT_SOURCE_DIR})
  
add_gopro_executable(${PROJ_NAME})
