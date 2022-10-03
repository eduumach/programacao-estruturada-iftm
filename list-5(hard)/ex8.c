// Faça uma função que retorne a quantidade de algarismos
// de um número inteiro qualquer. Exemplo: 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int algarismos(int x) {
    int n = 0;
    int aux = x;
    while (aux > 0) {
        aux /= 10;
        n++;
    }
    return n;
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O numero %d tem %d algarismos", numero, algarismos(numero));
    return 0;
}