#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <fcntl.h>

void error_handling(char *message); //에러 헨들링

int main(int argc, char* argv[]){ // 입력값 1번은 txt 파일, 2번은 IP, 3번은 포트를 받을 예정.
    int sock;
    struct sockaddr_in server_addr;
    char message[1000];  //서버에서에 보낼 메세지를 담을 장소
    int str_len;
    int fd;

    // 0번에는 컴파일된 프로그램, 1번은 txt 파일, 2번은 IP, 3번은 포트가 입력안되었을 때 프린트해주고 종료
    if(argc!=4){
        printf("Usage : %s<txt> <IP> <prot>\n", argv[0]);
        exit(1);
    }

    sock=socket(PF_INET, SOCK_STREAM, 0);
    if(sock == -1)
        error_handling("socket() error");

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family=AF_INET;
    server_addr.sin_addr.s_addr=inet_addr(argv[2]);
    server_addr.sin_port=htons(atoi(argv[3]));

    if(connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr))==-1)
        error_handling("connect() error!");

    str_len=read(sock, message, sizeof(message));

    if(str_len==-1)
        error_handling("read() error!");

    printf("message from server : %s \n", message);

    fd=open(argv[1], O_WRONLY |O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if(fd==-1)
        error_handling("open() error!");

    if(write(fd,message,sizeof(message))==-1)
        error_handling("write() error!");
    close(fd);

    close(sock);

    return 0;
}

void error_handling(char *message)
{
 fputs(message, stderr);
 fputc('\n', stderr);
 exit(1);
}
