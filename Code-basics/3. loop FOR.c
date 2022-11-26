#include <stdio.h>

int main()
{
    float fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%.2f : %.2f\n", fahr, (5.0/9.0)*(fahr-32) );
}
