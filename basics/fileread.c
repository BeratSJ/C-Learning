#include <stdio.h>

int main() {
    FILE *file = fopen("..//output//file.txt","r");
    char buffer[500];

    while(fgets(buffer,500,file) != NULL) {
    printf("%s",buffer);
    }

    fclose(file);
    return 0;
}