#include <stdio.h>

    int main() {
        
        int velocity;
        float transformed_velocity;
        
        scanf("%d", &velocity);
        transformed_velocity = (float)velocity / 3.6; 
      
      /* Здесь показан пример с неявным преобразованием. 
         Его необязательно использовать. Без (float) ответ будет корректным. */ 
       
        
        printf("%f", transformed_velocity);
        
        return 0;
        
    }


