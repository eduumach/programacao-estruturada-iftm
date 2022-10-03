// Crie uma função rand_array que recebe um inteiro N como parâmetro. 
// Retorne um array de N posições preenchido aleatoriamente.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arrayAleatorio(int N){
    srand(time(NULL));
    int array[N];
    for(int i = 0; i < N; i++){
        array[i] = rand() % 100;
        printf("%d ", array[i]); 
    }
}


int main(){
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    arrayAleatorio(N);
    return 0;
}