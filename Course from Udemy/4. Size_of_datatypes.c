#include <stdio.h>

int main(){

printf("\nThe size of int is %d", sizeof(int));
printf("\nThe size of short int is %d", sizeof(short int));
printf("\nThe size of long int is %d", sizeof(long int));
printf("\nThe size of long long int is %d", sizeof(long long int));
printf("\nThe size of signed short int is %d", sizeof(signed short int));

printf("\nThe size of char is %d", sizeof(char));
printf("\nThe size of unsigned char is %d", sizeof(unsigned char));

printf("\nThe size of float is %d", sizeof(float));

printf("\nThe size of double is %d", sizeof(double));
printf("\nThe size of long double is %d", sizeof(long double));

return 0;
}

/* Если вводить уникальный спецификатор для каждого из типов, то получается не то, что нужно.
Если вводить для всех, как здесь, %d, то получаем верное число. */
