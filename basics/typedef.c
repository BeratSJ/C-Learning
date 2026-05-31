#include <stdio.h>
#include <string.h>

typedef struct {
    char nickname[25];
    char password[25];
    int id;
}Login;

int main() {

    Login account1 = {"ahmet","123",0};

    printf("%s\n", account1.nickname);
    printf("%s\n",account1.password);
    printf("%d\n",account1.id);

    return 0;
}