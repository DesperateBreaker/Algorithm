cmake_minimum_required(VERSION 3.15)

# 项目名称  ${PROJECT_NAME}
# set(PROJECT_NAME SortAlgorithm)

# 项目名称及版本
project(SortAlgorithm VERSION 1.0)

# C++20
set(CMAKE_CXX_STANDARD 20)

# 头文件目录
include_directories(include)

# 添加头文件
file(GLOB_RECURSE HEADER_LIST "include/*.h")

# 将头文件分组
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/include PREFIX "Header Files" FILES ${HEADER_LIST})

# 添加源文件
set(SRC_LIST src/main.cpp src/MySort.cpp tests/MySortUnitTest.cpp)

# 创建
add_executable(SortAlgorithm ${SRC_LIST} ${HEADER_LIST})


target_precompile_headers(SortAlgorithm PRIVATE include/stdafx.h)