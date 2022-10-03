// 09) Faça um programa que calcule a soma de todos os números de 1 a 10.
// Imprima todos os números e a soma total.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0;
    for(int i = 1; i <= 10; i++){
        soma += i;
        printf("%d\n", i);
    }
    printf("Soma: %d\n", soma);
}