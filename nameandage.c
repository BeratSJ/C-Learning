#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter Name and Surname: ");
    fgets(name, sizeof(name), stdin); // Read a line of text including spaces
    printf("Enter Age: ");
    scanf("%d", &age); // & to get the address of age variable
    printf("Hello %s, Your Age: %d.\n", name, age); // Print the name and age
    return 0; // Return 0 to indicate successful execution
}