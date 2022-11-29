#include <stdio.h>

int main() {
    
    float m, h, imt;
    
    scanf("%f%f", &m, &h);
    imt = m / (h * h);
    
    printf("%f", imt);
    
    return 0;
    
}
