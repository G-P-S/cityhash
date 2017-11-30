# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.
cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             cityhash

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             src/main/cpp/cityhash/src/city.cc
             src/main/cpp/cityhash/src/city.h
             src/main/cpp/cityhash/src/citycrc.h
             src/main/cpp/cityhash/src/config.h
           )

# the header files are included in these directories
include_directories( src/main/cpp/cityhash/src )
