//08) Faça um programa que imprima na tela todas as tabuadas do 0 ao 9.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for(int i = 0; i <= 9; i++){
        for(int x = 0; x <= 9; x++){
            printf("%d x %d = %d\n", i, x, i*x);
        }
        printf("\n");
    }
}