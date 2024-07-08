cmake_minimum_required(VERSION 3.10)

# 项目信息
project(EigenTest)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含目录
include_directories(
        D:/forprogram/Eigen3
)

# 添加源文件
add_executable(EigenTest main.cpp)

# 链接库

# 设置 vcpkg 工具链文件路径
set(CMAKE_TOOLCHAIN_FILE "D:/forprogram/vcpkg-master/scripts/buildsystems/vcpkg.cmake")
