#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stddef.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<float.h>


#define LISTENQ 1024

#define MAXLINE 4069      //文本行最大长度


#define	FILE_MODE	(S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)


//定义程序中用到的端口
#define SERV_PORT 9877


/* Following shortens all the typecasts of pointer arguments: */
#define	SA	struct sockaddr

/* prototypes for our Unix wrapper functions: see {Sec errors} */

void Close(int);



/* prototypes for our socket wrapper functions: see {Sec errors} */
int		 Accept(int, SA*, socklen_t*);
void	 Bind(int, const SA*, socklen_t);
void	 Connect(int, const SA*, socklen_t);
void	 Getpeername(int, SA*, socklen_t*);
void	 Getsockname(int, SA*, socklen_t*);
void	 Getsockopt(int, int, int, void*, socklen_t*);

void Listen(int, int);








void	 Socketpair(int, int, int, int*);




void	 err_sys(const char*, ...);
void     err_quit(const char*, ...);




void	 str_cli(FILE*, int);