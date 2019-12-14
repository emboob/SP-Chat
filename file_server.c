#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <fcntl.h>

#define BUF_SIZE 10000

void error_handling(char *message);

int main(int argc, char *argv[])
{
    int server_socket;
    int client_socket;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    socklen_t client_addr_size;
    int fd;
    char buf[BUF_SIZE];
 
    fd=open(argv[1], O_RDONLY);
    if( fd==-1 )
        error_handling("open() error!");
    if( read(fd,buf,sizeof(buf))==-1)
        error_handling("read() error!");
    close(fd);

    if(argc!=3){
        printf("Usage : %s<txt>  <port>\n", argv[0]);
        exit(1);
    }

    server_socket=socket(PF_INET, SOCK_STREAM, 0);
    if(server_socket == -1)
        error_handling("socket() error");

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family=AF_INET;
    server_addr.sin_addr.s_addr=htonl(INADDR_ANY);
    server_addr.sin_port=htons(atoi(argv[2]));

    if(bind(server_sock, (struct sockaddr*) &server_addr, sizeof(server_addr))==-1)
        error_handling("bind() error");

    if(listen(server_sock, 5)==-1)
        error_handling("listen() error");

    client_addr_size=sizeof(client_addr);
    client_socket=accept(server_socket, (struct sockaddr*)&client_addr, &client_addr_size);
    if(client_socket==-1)
        error_handling("accept() error");

    write(clnt_sock, buf, sizeof(buf));

    close(client_socket);
    close(server_socket);

    return 0;
}

void error_handling(char *message)
{
    fputs(message, stderr);
    fputc('\n',stderr);
    exit(1);
}
