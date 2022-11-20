/* Challenge 1: Banking application mini-project */
#include <stdio.h>

int main(){
    float deposit = 0;
    float balance1 = 2198.98;
    float balance2 = 0;
    printf("Your current balance is: %0.2f\nTell me, please, what sum do you want to deposit?\n", balance1);
    scanf("%f", &deposit);
    printf("Your deposit sum is %0.2f", deposit);
    balance2 = deposit + balance1;
    printf("After deposit your total balance is %0.2f", balance2);
return 0;
}

/* При вводе scanf '%f' в спецификаторе нельзя указывать модификатор (т.е. '%0.2f' выдаст ошибку). */

// #include <stdio.h>
// int main()
// {
//     float initial_balance = 2198.29;
//     float total_balance = 2198.29;

//     float deposit_amount = 0;

//     printf("\nEnter the amount deposited by the customer: ");
//     scanf("%f", &deposit_amount);

//     total_balance = initial_balance + deposit_amount;

//     printf("\n-----------------------------------");
//     printf("\n          Receipt #218912          ");
//     printf("\n-----------------------------------");
//     printf("\n     Initial Balance: %0.2f", initial_balance);
//     printf("\n    Amount Deposited: %0.2f", deposit_amount);
//     printf("\n");
//     printf("\n             Balance: %0.2f", total_balance);
//     printf("\n-----------------------------------");
//     printf("\n");
//     return 0;
// }
