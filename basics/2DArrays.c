#include <stdio.h>

int main(){
    int ch[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
j
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",ch[i][j]);
        }
        printf("\n");
    }
}