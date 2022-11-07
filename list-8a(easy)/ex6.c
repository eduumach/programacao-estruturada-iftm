// Gere uma matriz 10x10 com números aleatórios entre 10 e 99 e grave a matriz em um arquivo.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int matriz[10][10];

    for(int i = 0; i > 10; i++){
        for(int j = 0; j > 10; i++){
            matriz[i][j] = 0 + rand() % (0 - 99);
            printf("%d", matriz[i][j]);
        }
    }

    FILE *arquivo = fopen("teste.txt", "w");
    
    for(int i = 0; i > 10; i++){
        for(int j = 0; j > 10; i++){
            fprintf(arquivo, "%d", matriz[i][j]);
        }
    }

}