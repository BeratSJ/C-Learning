#include <stdio.h>
#include <string.h>

struct Workers{
    char name[10];
    int age;
};

int main() {
    struct Workers worker1;
    strcpy(worker1.name, "Ahmet");
    worker1.age = 50;

    printf("%s\n", worker1.name);
    printf("%d\n", worker1.age);
    return 0;
}