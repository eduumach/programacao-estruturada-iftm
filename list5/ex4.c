// Faça uma função para verificar se um número é um Happy number ou não. 
// Um Happy number é definido pelo seguinte procedimento. Começando com
// qualquer número inteiro positivo, o número é substituído pela soma 
// dos quadrados dos seus dígitos, e repetir o processo até que o 
// número seja igual a 1 ou até que ele entre num ciclo infinito que não 
// inclui um ou seja a soma dos quadrados dos algarismos do quadrado de 
// um número positivo inicial.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int happy_number(int x) {
    int sum = 0;
    while (x > 0) {
        sum += pow(x % 10, 2);
        x /= 10;
    }
    return sum;
}

int main( ){
    int numero, happy;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    happy = happy_number(numero);
    for (int i = 0; i < 100; i++) {
        happy = happy_number(happy);
        if (happy == 1) {
            break;
        }
    }
    if (happy == 1) {
        printf("O numero %d eh um numero feliz", numero);
    } else {
        printf("O numero %d nao eh um numero feliz", numero);
    }
    return 0;
}
