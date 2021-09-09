# Cmake

## 下载libevent

* 自己编译 https://libevent.org/

```shell
./configure
make
sudo make install
```

* brew 安装

```
brew install libevent
```

## 编译

* CMakeLists.txt
```shell
cmake_minimum_required(VERSION 3.19)
project(sample-four C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(include)
# 引入本地libevent头文件
include_directories(/usr/local/Cellar/libevent/2.1.12/include)
# 静态库
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

# 静态库 libevent.a
target_link_libraries(sample-four event)
```

* Reload CMake Project 
    * 右键CmakeLists
    * double shift -> search "reload cmake"
    * 命令行执行
    ```shell
    cmake CMakeLists.txt -B build -DCMAKE_BUILD_TYPE=Debug
    cd build
    make
    ```
  
## CMake示例在CMakeLists.txt中