// 03) Faça um programa que imprima todos os números pares entre 0 e 100 em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    for (i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}