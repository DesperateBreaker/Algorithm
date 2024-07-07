cmake_minimum_required(VERSION 3.16)

# 项目名称及版本
project(DesignMode VERSION 1.0)

# 设置 C++20 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 头文件目录
include_directories(include)

# 添加源文件
set(SRC_LIST src/Test.cpp src/XiaoMiCar.cpp src/Tesla.cpp src/HuaWeiCar.cpp)

# 添加头文件
file(GLOB_RECURSE HEADER_LIST "include/*.h")

# 将头文件分组
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/include PREFIX "Header Files" FILES ${HEADER_LIST})

# 创建可执行文件
add_executable(DesignMode ${SRC_LIST} ${HEADER_LIST})

# 预编译头文件
target_precompile_headers(DesignMode PRIVATE include/stdafx.h)
