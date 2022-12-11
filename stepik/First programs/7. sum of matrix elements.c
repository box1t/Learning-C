#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int main(){
    
    int a[ROWS][COLUMNS];
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            sum += a[i][j]; 
        }
    }
    printf("%d", sum);
    return 0;
}
