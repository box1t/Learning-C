#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (){
  printf("int or signed int %d to %d\n", INT_MIN, INT_MAX);
  printf("float %le to %le\n\n", FLT_MIN, FLT_MAX);
  
  printf("char %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("signed char %d to %d\n\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char %d to %d\n\n", 0, UCHAR_MAX);
  
  printf("double %le to %le\n", DBL_MIN, DBL_MAX);

  printf("unsigned int %d to %u\n", 0, UINT_MAX);

  printf("short int or short signed int or short %hd to %hd\n", SHRT_MIN, SHRT_MAX);
  printf("long int or signed long int or long %ld to %ld\n", LONG_MIN, LONG_MAX);

  printf("unsigned short int %d to %d\n", 0, USHRT_MAX);

  printf("unsigned long int %d to %lu\n", 0, ULONG_MAX);
return 0;
}


/* Когда 'int' или 'signed int' по умолчанию, допустимые значения от -ve до +ve.
Если 'char' совпадает с 'signed char' / 'unsigned char', то по умолчанию на аппаратной платформе стоит соответствующий тип для 'char' 
Используем для 'char', чтобы узнать его interer value.
Для 'unsigned' добавляем 0 в начало диапазона.
Для получения диапазона у типов с плавающей точкой ('long', 'double') после %l вплотную пишем 'e'.*/
