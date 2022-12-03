/*
Приведённое мной решение представляет собой нерациональный алгоритм, к тому же с ошибкой.
Действительно элегантное решение будет написано вне комментария.

Не нужно переводить все в общие кнаты кошельков, вычислять в кнатах,
результат преобразовывать в галеоны, сикли, кнаты. 
А я сделал именно так...

#include <stdio.h>

int main() {
    
    int g1, s1, k1;
    int g2, s2, k2;
    int final_g, final_s, final_k;
    int total_g, total_s, total_k;
    
    scanf("%d %d %d\n", &g1, &s1, &k1);
    scanf("%d %d %d", &g2, &s2, &k2);
    
    total_g = (g1 + g2) * 493;
    total_s = (s1 + s2) * 29;
    total_k = k1 + k2 + total_g + total_s;
    
    final_g = total_k / 493;
    final_s = (total_k - (total_k % 493) ) % 29;
    final_k = total_k - (total_k - (total_k % 493) % 29);
    
    printf("%d %d %d", final_g, final_s, final_k);
    return 0;
    
} */

#include <stdio.h>

#define GALEON 17   // 1 galleon = 17 sickles
#define SICKLE 29   // 1 sickle = 29 knuts

int main() {
  
    int g1, s1, k1;     // кошелек1
    int g2, s2, k2;     // кошелек2
    int g, s, k;        // кошелек результат


    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);


    // кошелек результат = кошелек 1 + кошелек 2
    int t1, t2, t;  // всего в кнатах в кошельках


    // переводим все в кнаты
    t1 = (g1*GALEON + s1)*SICKLE + k1;      // кошелек1
    t2 = (g2*GALEON + s2)*SICKLE + k2;      // кошелек2


    // считаем сумму
    t = t1 + t2;                    // кошелек результат


    // переводим t обратно в кнаты, сикли, галеоны
    s = t / SICKLE; // из кучи кнатов отложим сикли (большой кучей)
    k = t % SICKLE; // оставшиеся кнаты - в кошелек
    g = s / GALEON; // из кучи сиклей отложим галеоны
    s = s % GALEON; // оставшиеся сикли - в кошелек


    printf("%d %d %d\n", g, s, k);
    return 0;
}

