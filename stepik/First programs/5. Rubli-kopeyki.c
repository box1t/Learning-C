/*
Один купец, получая сумму в rub рублей и kop копеек, оставлял себе одинаковое количество монет рублями (1 рубль),
пятаками (5 копеек) и копейками (1 копейка), одинаково по n штук каждого вида. Остальную сумму rest он копейками раздавал бедным.

"Одинаковое количество монет по 2 монеты" - это 2 рубля + 2 пятака + 2 копейки.

Дано: rub и kop через пробел.
Напечатать: n и rest через пробел.
*/

#include <stdio.h>

int main() {
    
    int rub, kop, pyat, kop_end, kop_total, rest, n;
    
    scanf("%d%d", &rub, &kop);
    
    kop_total = rub * 100 + kop; // общее число копеек вместе с рублями
    rest = kop_total % 106; // остаток от деления на 106 будет раздан беднякам (а идея решения в делении на 106)
    pyat = (kop_total - rest) / 5; // число пятаков в конце
    kop_end = (kop_total - rest) % 5; // число копеек в конце
    n = kop_total / 106; // n - число итераций, грубо говоря (одинаковое число монет)
    printf("%d %d", n, rest);
    
    return 0;
}