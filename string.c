#include <stdio.h>
#include <string.h>

int main() {

    //char a = 'A';
    //char b = 'B';
    //
    //char temp;
//
    //temp = a;
    //a = b;
    //b = temp;

    char a[10] = "araba";
    char b[10] = "motor";
    
    char temp[10];

    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);


    


    printf("%c\n",a);
    printf("%c\n",b);
    printf("&c\n",temp);
    char games[][15] = {"mc","cs","hoi4"};

    //strcpy(games[0], "Metin 2");

    for(int i=0; i< sizeof(games)/sizeof(games[0]); i++) {
        printf("%s\n", games[i]);
    }



    return 0;
}