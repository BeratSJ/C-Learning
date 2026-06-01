#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


char Tahta
void resetTable();
void printTable();
int voidControl();
void playerMove();
void rivalMove();
char WinnerControl();
void printWinner(char);



int main() {

    char winner = ' ';
    char repeat = ' ';

    do{
        winner = ' ';
        repeat = ' ';
        resetTable();

        while(winner == ' ' && voidControl() != 0){
            printTable();

            playerMove();
            winner = winnerControl();
            if(winner != ' ' || voidControl() == 0){
                break;
            }
        }
    }while(react == 'E');
    return 0;
}

void resetTable(){
    for(int i = 0;i < 3; i++){
        for(int j = 0;j<3;j++){
            Tahta[i][j] = ' ';
        }
    }
}
void printTable(){

}
int voidControl(){
    int voidArea = 9;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(Tahta[i][j] != ' '){
                voidArea--;
            }
        }
    }
    return voidArea;
}
void playerMove(){

}
void rivalMove(){

}
char WinnerControl(){

}
void printWinner(char){

}
