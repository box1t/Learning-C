
#include <stdio.h>

int kelvin_to_celcius(int xxx);

int main(){
  printf("%d\n", kelvin_to_celcius(8765) );
return 0;
}


int kelvin_to_celcius(int kelvin)
{
    int celcius;
    celcius = kelvin - 273;
    return celcius;
}
