#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(){
    int sockfd = socket(AF_INET,SOCK_STREAM,0); // AF_INET=IPv4 SOCK_STREAM=TCP protocol=0
    if (sockfd == -1){  // Eğer hata verirse -1 döner ve bunu göstermek için bunu yazdık.
        perror("socket error");
        return 1;
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET; // IPv4
    server_addr.sin_port = htons(8080); //port 8080
    server_addr.sin_addr.s_addr = INADDR_ANY; //bütün arayüzlerden dinle

    int result = bind(sockfd,(struct sockaddr*)&server_addr, sizeof(server_addr)); //port'u atar.
    if (result == -1) {
        perror("bind error");
        return 1;
    }
    listen(sockfd,5);

    while (1){
    int client_fd = accept(sockfd, NULL, NULL);
    if (client_fd == -1){
        perror("accept error");
        return 1;
    }
    pid_t pid = fork();

        if(pid == 0){
        // child kısmı, kullanıcı ile bağlantı

    char buffer[1024];
    int bytes_received = recv(client_fd, buffer, sizeof(buffer), 0);
    buffer[bytes_received] = '\0';
    printf("İstemciden gelen: %s\n", buffer);

    send(client_fd, "merhaba",7,0);
    close(client_fd);
    close(sockfd);
    exit(0);
}
    else {
        // parent (döngü başa dönmesi için kapatıyor)
        close (client_fd);
    }
    }

    return 0;
}