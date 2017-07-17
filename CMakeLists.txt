cmake_minimum_required(VERSION 2.8)
list(APPEND CMAKE_MODULE_PATH ${GOPRO_TOOLS_DIR}/cmake)
include("${GOPRO_TOOLS_DIR}/cmake/gopro.cmake")

gopro_init(cityhash)

gopro_begin_lib(cityhash)
include_directories(src)
gopro_dir(src)
gopro_files(
    city.cc
)
set(HEADERS
    city.h
    citycrc.h
    config.h
)
gopro_dir(src GROUP include)
gopro_files(${HEADERS})
gopro_public_headers(include ${HEADERS})
gopro_public_header_dir(src)
gopro_end_lib()

