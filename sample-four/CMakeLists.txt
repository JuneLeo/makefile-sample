cmake_minimum_required(VERSION 3.19)
project(sample-four C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(include)
include_directories(/usr/local/Cellar/libevent/2.1.12/include)
link_directories(/usr/local/Cellar/libevent/2.1.12/lib)




add_executable(sample-four
        include/common.h
        include/get.h
        include/sum.h
        include/val.h
        src/get.c
        src/main.c
        src/sum.c
        src/val.c)


target_link_libraries(sample-four event)
