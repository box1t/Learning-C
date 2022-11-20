/* Challenge 2: Mini-project on operators. 

- Program should accept 3 float numbers from user.

- The program should calculate average of these 3 numbers and display the average on the output screen.

- Display High/Low indicator for value of average (ex.: value '1' if average > '15', else display '0'. */


/* 1 способ - не самый красивый, вводится всё сразу. Непонятный для пользователя. Второй более наглядный из-за постепенного ввода. */
// #include <stdio.h>

// int main(){
//     float num1 = 0;
//     float num2 = 0;
//     float num3 = 0;
//     float avg = 0;

//     scanf("%f%f%f", &num1, &num2, &num3);

//     avg = (num1 + num2 + num3)/3;
//     printf("The avg value of 3 numbers is %f\nIndicator of High avg is %d", avg, avg > 15);

// return 0;
// }

#include <stdio.h>

int main(){
    float num1;
    float num2;
    float num3;
    float avg;

    printf("\nEnter no. 1: ");
    scanf("%f", &num1);

    printf("\nEnter no. 2: ");
    scanf("%f", &num2);

    printf("\nEnter no. 3: ");
    scanf("%f", &num3);

    avg = (num1 + num2 + num3)/3;

    printf("\n\nAverage: %f", avg);

    printf("\nHIGH/LOW Indicator: %d \n\n", avg > 15);

    return 0;
}


