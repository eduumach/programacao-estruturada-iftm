// Crie uma função zeros_array que recebe um inteiro N como parâmetro. 
// Retorne um array de N posições preenchido com zeros.

#include<stdio.h>
#include<stdlib.h>

void arrayZeros(int N){
    int array[N];
    for(int i = 0; i < N; i++){
        array[i] = 0;
        printf("%d ", array[i]);
    }
}

int main(){
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    arrayZeros(N);
    return 0;
}
