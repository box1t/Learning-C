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

/* А теперь в виде функции:

#include <stdio.h>


#define N 3


// сумма всех элементов массива
int sum_all(int a[N][N])
{
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
             sum += a[i][j];
        }
    }
    return sum;
}


int main()
{
    int a[N][N];


    // чтение массива
    for(int i = 0; i < N; i++) {
        // чтение одной строки a[i]
        for(int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("%d\n", sum_all(a));
    return 0;
}

*/
