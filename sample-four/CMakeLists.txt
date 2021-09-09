cmake_minimum_required(VERSION 3.19)
project(sample-four C)

#set(CMAKE_C_STANDARD 11)
#if(0)
#    set(CMAKE_CUSTOM_VALUE 1)
#else()
#    set(CMAKE_CUSTOM_VALUE 0)
#endif()
#message(value:${CMAKE_CUSTOM_VALUE})

#message(PROJECT_SOURCE_DIR:${PROJECT_SOURCE_DIR})
#message(PROJECT_BINARY_DIR:${PROJECT_BINARY_DIR})
#message(PROJECT_NAME:${PROJECT_NAME})
#message(CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR})
#message(CMAKE_CURRENT_BINARY_DIR:${CMAKE_CURRENT_BINARY_DIR})
#message(CMAKE_CURRENT_LIST_DIR:${CMAKE_CURRENT_LIST_DIR})
#message(CMAKE_CURRENT_LIST_LINE:${CMAKE_CURRENT_LIST_LINE})
#message(CMAKE_MODULE_PATH:${CMAKE_MODULE_PATH})
#message(EXECUTABLE_OUTPUT_PATH:${EXECUTABLE_OUTPUT_PATH})
#message(LIBRARY_OUTPUT_PATH:${LIBRARY_OUTPUT_PATH})
#
#message(ANDROID_NDK: $ENV{ANDROID_NDK})
#message(JAVA_HOME: $ENV{JAVA_HOME})
#message(ANDROID_HOME: $ENV{ANDROID_HOME})






include_directories(.)
include_directories(include)
include_directories(/usr/local/Cellar/libevent/2.1.12/include)
link_directories(/usr/local/Cellar/libevent/2.1.12/lib)


find_library(
        log-lib
        log)


message(songpengfei : ${log-lib})

#aux_source_directory(src  SRC_LIST)
#aux_source_directory(include  INCLUDE_LIST)

file(GLOB SRC_LIST "src/*.c")

#set(SRC_LIST src/main.c src/get.c src/sum.c)
#message(src : ${SRC_LIST})
#list(APPEND SRC_LIST src/val.c include/val.h)
#message(src : ${SRC_LIST})
#list(REMOVE_ITEM SRC_LIST include/val.h)
#message(src3 : ${SRC_LIST})

add_executable(sample-four ${SRC_LIST})

#add_library(sample-four STATIC
#        include/common.h
#        include/get.h
#        include/sum.h
#        include/val.h
#        src/get.c
#        src/main.c
#        src/sum.c
#        src/val.c)


target_link_libraries(sample-four event)
