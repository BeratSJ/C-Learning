#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter Name and Surname: ");
    fgets(name, sizeof(name), stdin); 
    printf("Enter Age: ");
    scanf("%d", &age); 
    printf("Hello %s, Your Age: %d.\n", name, age);
    return 0;
}