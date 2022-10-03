// 05) Faça um programa que imprima todos os números múltiplos de 3 entre 100 e 200 em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    for (i = 100; i < 200; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}