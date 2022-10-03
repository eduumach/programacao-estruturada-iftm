// Crie uma função que receba como parâmetro um array do tipo int e um inteiro N. 
// Caso N exista no array, retorne a posição (índice), caso N não exista no 
// array, retorne -1.

#include<stdio.h>
#include<stdlib.h>


int verifica(int numeros[],int tamanho, int N){
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] == N){
            return i;
        }
    }
    return -1;
}

int main(){
    int tamanho, N, numeros[10];
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Digite o número a ser verificado: ");
    scanf("%d", &N);
    printf("%d\n", verifica(numeros,tamanho, N));

    return 0;
}
