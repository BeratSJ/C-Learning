#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt","w");

    fprintf(file,"file");

    fclose(file);
    return 0;
}