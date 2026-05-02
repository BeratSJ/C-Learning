#include <stdio.h>
#include <stdlib.h>
 
int randomNumber(){
    return rand();
}
int main() {
    int num = randomNumber();
    printf("%d",num);
    return 0;
}