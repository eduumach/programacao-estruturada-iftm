// Crie uma função que receba como parâmetro um array do tipo int e um inteiro N. 
// Retorne um outro array onde cada elemento do array de entrada será elevado a N.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void eleva(int numeros[], int tamanho, int N){
    int elevado[tamanho];
    for(int i = 0; i < tamanho; i++){
        elevado[i] = pow(numeros[i], N);
        printf("%d ", elevado[i]);
    }
}

int main(){
    int tamanho, N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    int array[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("Digite o número a ser elevado: ");
    scanf("%d", &N);
    eleva(array, tamanho, N);
    return 0;
}