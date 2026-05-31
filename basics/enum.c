#include <stdio.h>

enum Weekday{Mon=1,Tue=2,Wen=3,Thu=4,Fri=5,Sat=6,Sun=7};

int main(){
    enum Weekday thisDay;
    thisDay = Fri;

    if(thisDay != 6 && thisDay != 7){
        printf("Weekend");
    }
    else{
        printf("Not Weekend");
    }

    return 0;
}