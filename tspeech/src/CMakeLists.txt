# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(EmployeeSystem)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加源文件
set(SOURCES
    src/main.cpp
    src/Employee.cpp
    src/Manager.cpp
    src/Engineer.cpp
)

# 包含头文件目录
include_directories(include)


# 定义可执行文件
add_executable(EmployeeSystem ${SOURCES})
