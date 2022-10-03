// Crie uma função que receba como parâmetro: um array, um inteiro X, um inteiro
// Y. Retorne um array que é um sub-array do array original tendo como X o seu 
// índice inicial e Y o seu índice final. Exemplo:

#include<stdio.h>
#include<stdlib.h>


int subArrayFunc(int array[], int x, int y, int tamanho){
    if(x > y || x < 0 || y > tamanho){
        printf("Não tem como criar um sub Array com este intervalo.");
        return 0;
    }

    int subArray[y-x+1];
    for(int i = 0; i < y-x+1; i++){
        subArray[i] = array[x+i];
        printf("%d ", subArray[i]);
    }
    return 0;

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
    int x, y;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    subArrayFunc(numeros, x, y, N);
    return 0;
}