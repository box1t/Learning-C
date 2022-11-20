// #include <stdio.h>
// int main(){
//     int count;
//     printf("Print your count: ");
//     scanf("\n%d", &count);
//     printf("The increment of your count is %d\n\n.", ++count);
// return 0;
// }


#include <stdio.h>

int main()
{

    int count = 10;
    int total = 0;

    total = count++;
    printf("\nValue of total after total = count++ is %d", total);
    printf("\nValue of count after total = count++ is %d", count);

    //Reset value of count and total to original values
    count = 10;
    total = 0;

    total = ++count;
    printf("\n\nValue of total after total = ++count is %d", total);
    printf("\nValue of count after total = ++count is %d", count);

    //Reset value of count and total to original values
    count = 10;
    total = 0;

    total = count--;
    printf("\n\nValue of total after total = count-- is %d", total);
    printf("\nValue of count after total = count-- is %d", count);

    //Reset value of count and total to original values
    count = 10;
    total = 0;

    total= --count;
    printf("\n\nValue of total after total = --count is %d", total);
    printf("\nValue of count after total = --count is %d", count);

    printf("\n");
    return 0;
}
