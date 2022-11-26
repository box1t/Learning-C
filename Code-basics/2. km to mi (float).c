#include <stdio.h>

int main(){
  float km, mi;
  float low, step, upper;

  low = 0.0;
  upper = 300.0;
  step = 20.0;

  km = low;

  while (km <= upper){
    printf("%0.2f : %0.2f\n", km, mi);
    km += step;
    mi += step*0.621;
  }
}
