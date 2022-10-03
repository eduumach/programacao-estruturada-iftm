// Faça um programa que calcule a soma de todos os números pares entre 0 e 100.
// Imprima os números e a soma total.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            soma += i;
            printf("%d\n", i);
        }
    }
    printf("Soma: %d\n", soma);
}