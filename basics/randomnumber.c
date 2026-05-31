#include <stdio.h>
#include <stdlib.h>


int main(){
int randomNumber;
int userNumber;
randomNumber = rand();
printf("Enter Number:");
scanf("&d",userNumber);
if(userNumber > randomNumber){
    printf("Your Number is bigger than random number.");
}
else if (userNumber < randomNumber){
    printf("Your number is smaller than random number.");
}
else {
    printf("WOW! Your Number = Random Number!");
}
return 0;
}