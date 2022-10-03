// 04) Faça um programa que imprima todos os números ímpares entre 0 e 100 em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    for (i = 100; i > 0; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}