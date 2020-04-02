#LIB_LINUX_SOCKET为当前目录下的所有源文件
set(LIB_LINUX_SOCKET_SRC error.c wrapsock.c wrapunix.c str_echo.c writen.c wraplib.c str_cli.c wrapstdio.c readline.c)
set(LIB_OUTPUT_PATH ../lib)
add_library(unp ${LIB_LINUX_SOCKET_SRC})