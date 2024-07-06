cmake_minimum_required(VERSION 3.15)

# 项目名称及版本
project(DesignMode VERSION 1.0)

# C++20
set(CMAKE_CXX_STANDARD 20)

# 头文件目录
include_directories(include)

# 添加源文件
set(SRC_LIST src/Test.cpp)

# 创建
add_executable(DesignMode ${SRC_LIST})

