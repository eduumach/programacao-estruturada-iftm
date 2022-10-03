// Crie uma função que receba um array e retorne seu tamanho.

#include<stdio.h>
#include<stdlib.h>

int tamanhoArray(int numeros[]){
    int tamanho = 0;
    while(numeros[tamanho] != '\0'){
        tamanho++;
    }
    return tamanho;
}


int main(){
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    int numeros[N];
    for(int i = 0; i < N; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("O tamnho eh: %d", tamanhoArray(numeros));
    return 0;
}