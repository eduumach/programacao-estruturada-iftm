//07) Faça um programa que imprima na tela todos os números entre 0 e 100, porém substitua os múltiplos de 4 pela palavra
//“plim”. Ex. 0, 1, 2, 3, plim, 5, 6, 7, plim, 9, …

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    for (i = 0; i < 100; i++) {
        if (i % 4 == 0) {
            printf("plim\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}