# CMakeList.txt: test 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
set(EXCUTABLE_OUTPUT_PATH ./)
set(INC_DIR ${PROJECT_SOURCE_DIR}/lib)
include_directories(${INC_DIR})
link_directories(${INC_DIR})
add_executable (tcpserv01 tcpserv01.c  )
target_link_libraries(tcpserv01 unp)

# TODO: 如有需要，请添加测试并安装目标。
