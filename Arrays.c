#include <stdio.h>

int main() {
    int ages[] = {25, 30, 35, 40, 45};
    
    for(int i = 0; i < sizeof(ages) / sizeof(ages[0]); i++) {
        printf("Age %d: %d\n", i + 1, ages[i]);
    }
    return 0;
}