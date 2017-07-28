cmake_minimum_required(VERSION 2.8)
list(APPEND CMAKE_MODULE_PATH ${GOPRO_TOOLS_DIR}/cmake)
include("${GOPRO_TOOLS_DIR}/cmake/gopro.cmake")

gopro_init(cityhash)

gopro_begin_lib(cityhash GROUP 3rdparty)
gopro_public_include_dirs(src)
gopro_public_headers(DIR src INSTALL_DIR include
    city.h
    citycrc.h
    config.h
)
gopro_files(DIR src
    city.cc
)
gopro_end_lib()

