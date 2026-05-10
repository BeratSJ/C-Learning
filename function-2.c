#include <stdio.h>
#include <stdlib.h>
 
int randomNumber(){
    return rand();
}

int isPrimeNumber(int num) {
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }

    return 1; 
}

int FibonacciNumberList(int num){
    int num1 = 0;
    int num2 = 1;
    int total;

    for (int i = 1; i <= num; i++){
        total = num1 + num2;
        num1 = num2;
        num2 = total;
    }
    return total;
}

int ArraySum() {
    int numList[] = {10,20,30,40,50,60,70,80,90,100};

    int numListSize = sizeof(numList) / sizeof(numList[0]);
    for (int i = 0; i < numListSize; i++){
        printf("%d ",numList[i]);
    }
    return 0;
}

int main() {
    int num = randomNumber();
    printf("%d",num);
    if(isPrimeNumber(5))
    {
        printf("asal");
    }
    else {
        printf("asal degildir");
    }
    num = FibonacciNumberList(2);
    printf("%d",num);

    ArraySum();
    getchar();
    return 0;
}