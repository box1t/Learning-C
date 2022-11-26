#include <stdio.h>

int main()
{
  int celcius, kelvin;
  int lower, upper, step;

  upper = 300;
  lower = 0;
  step = 20;

  celcius = lower;

  while (celcius <= upper){
    kelvin = celcius + 273;
    printf("%d : %d\n", celcius, kelvin);
    celcius = celcius + step;
  }
return 0;
}

/* prints:
0 : 273
20 : 293
40 : 313
60 : 333
80 : 353
100 : 373
120 : 393
140 : 413
160 : 433
180 : 453
200 : 473
220 : 493
240 : 513
260 : 533
280 : 553
300 : 573
*/
