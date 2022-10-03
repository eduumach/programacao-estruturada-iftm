// 06) Faça um programa que imprima  todos os números múltiplos de 4 entre 100 e 300 em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    for (i = 100; i < 200; i++) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}