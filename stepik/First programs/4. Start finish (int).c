/* 
Длина круга беговой дорожки на стадионе round метров. Студенты должны пробежать total метров.

Напечатать:

Сколько полных кругов должны пробежать студенты?
В скольких метрах от старта надо поставить финиш?
Все числа целые.
*/

#include <stdio.h>

int main() {
    
    int round, total;
    int number, finish;
    scanf("%d%d", &round, &total);
  
    number = total / round;
    finish = total % round;
  
    printf("%d %d", number, finish);
    return 0;
    
}




