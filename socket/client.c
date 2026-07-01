#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(){
    int sockfd = socket(AF_INET, SOCK_STREAM,0); // AF_INET=IPv4 SOCK_STREAM=TCP protocol=0
    if (sockfd == -1){  // Eğer hata verirse -1 döner ve bunu göstermek için bunu yazdık.
        perror("socket error");
        return 1;
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET; // IPv4
    server_addr.sin_port = htons(8080); //port 8080
    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    int result = connect(sockfd, (struct sockaddr*)&server_addr,sizeof(server_addr));
    if (result == -1){
        perror("result error");
        return 1;
    }

    char buffer[1024];

        char message[1024];
    printf("Write Message:");
    fgets(message, sizeof(message),stdin);
    send(sockfd,message, strlen(message), 0);

    int bytes_received = recv(sockfd, buffer, sizeof(buffer), 0);  // mesaj alımı
    buffer[bytes_received] = '\0';  //sondaki oluşan gereksiz kısmı siliyoruz

    printf("Sunucudan gelen: %s\n", buffer);

    close(sockfd);

    return 0;
}