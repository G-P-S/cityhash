cmake_minimum_required(VERSION 2.8)
list(APPEND CMAKE_MODULE_PATH ${GOPRO_TOOLS_DIR}/cmake)
include("${GOPRO_TOOLS_DIR}/cmake/gopro.cmake")

gopro_setup()
gopro_project(CityHash)

gopro_begin_lib(CityHash)
include_directories(.)
gopro_dir(. GROUP src)
gopro_files(
    city.cc
)
set(HEADERS
    city.h
    citycrc.h
    config.h
)
gopro_dir(. GROUP include)
gopro_files(${HEADERS})
gopro_public_headers(include ${HEADERS})
gopro_public_header_dir(.)
gopro_end_lib()

gopro_finish()

