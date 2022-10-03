//  07) Faça uma função que calcule e retorne o fatorial de um número inteiro. O fatorial de
//  um número n qualquer é dado pela fórmula: n! = n * n-1 * n-2 * n-3 * … * 1. 
//  Exemplo: 4! = 4 * 3 * 2 * 1 = 24.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, resultado = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("!%d = ", n);

    for(int i = n; i >= 2; i--){
        resultado = resultado * i;
        printf("%d * ", i);
    }

    printf("1 = %d\n", resultado);

    return 0;
}