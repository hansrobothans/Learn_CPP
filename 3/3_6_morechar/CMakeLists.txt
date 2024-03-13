#规定cmake的最低版本要求
cmake_minimum_required (VERSION 3.1)

#项目的名称，不一定和你的文件夹名称一样
project(3_6_morechar)

#设置c++编译器
set(CMAKE_CXX_COMPILER "g++")

# 获取所有源文件
# 获取./src目录下的所有源文件,并将它们存储在SrcFiles变量中。
aux_source_directory(./src SrcFiles)

# 添加可执行文件
# 添加一个名为"main"的可执行文件由SrcFiles变量中的源文件构建。
add_executable(3_6_morechar.exe ${SrcFiles})

#添加头文件的搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

#设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)
