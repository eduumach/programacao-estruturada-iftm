// Crie um array do tipo double com 10 posições e preencha com valores 
// aleatórios entre 0 e 1. Exemplo: 0.14022471, 0.96360618, 
// 0.37601032, 0.25528411.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    double numeros[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        numeros[i] = (double)rand() / RAND_MAX;
        printf("%.8f ", numeros[i]);
    }

    return 0;
}