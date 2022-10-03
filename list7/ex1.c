// Gere uma matriz 10x10 onde as linhas/colunas de 0 a 8 serão preenchidas 
// aleatoriamente com valores entre 0 e 9. A linha 9 e a coluna 9, devem
// conter a soma dos elementos. Imprima a matriz. Exemplo: O elemento 
// matriz[0][9] deve ter a soma de todos os elementos da primeira linha.
// O elemento matriz[9][0] deve ter a soma de todos os elementos da primeira 
// coluna. E assim sucessivamente. Veja o exemplo abaixo para uma matriz 3x3.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3


int main(){
    int matriz[SIZE][SIZE];
    int soma, i, j;
    srand(time(NULL));
    for(i = 0; i < SIZE-1; i++){
        soma = 0;
        for(j = 0; j < SIZE-1; j++){
            matriz[i][j] = rand() % 10;
            soma += matriz[i][j];
        }
        matriz[i][SIZE-1] = soma;
    }
    for(i = 0; i < SIZE; i++){
        soma = 0;
        for(j = 0; j < SIZE-1; j++){
            soma += matriz[j][i];
        }
        matriz[SIZE-1][i] = soma;
    }
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}