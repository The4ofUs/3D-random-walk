cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( RandomWalk )


include_directories( include )

file(GLOB SOURCES "apps/*.cpp")

add_executable( RandomWalk ${SOURCES})

