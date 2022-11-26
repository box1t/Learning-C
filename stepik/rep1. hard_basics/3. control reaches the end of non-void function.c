#include <stdio.h>

int main(){
// Возвращает 1 если в числе одна цифра, иначе 0
int is_single_digit(int n) {
    if (n < 0 || n > 9) { 
        return 0;
    } 
    else {
        return 1;
    }
}

// Возвращает 1 если в числе ровно две цифры, иначе 0
int is_double_digit(int n) {
    if (n < 10 || n > 99) {
        return 0;
    } 
    else {
        return 1;
    }
}
}

/*
// Возвращает 1 если в числе одна цифра, иначе 0
int is_single_digit(int n) {
    return (n > -1 && n < 10);
}

// Возвращает 1 если в числе ровно две цифры, иначе 0
int is_double_digit(int n) {
    return (n > 9 && n < 100);
}
*/


/*
// Возвращает 1 если в числе одна цифра, иначе 0
int is_single_digit(int n) {
    return 0 <= n && n <= 9;
}

// Возвращает 1 если в числе ровно две цифры, иначе 0
int is_double_digit(int n) {
    return 10 <= n && n <= 99;
}
*/
