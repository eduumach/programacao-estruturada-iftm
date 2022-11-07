//  Crie um array 3D (10x10) com valores aleatórios entre 0 e 255. 
// Crie uma matriz 2D (10x10) onde o valor de cada elemento é a média entre os três valores do array 3D.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 10


int main(){
    int matriz3d[SIZE][SIZE][3];
    int matriz2d[SIZE][SIZE];
    int i, j, k;
    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < 3; k++){
                matriz3d[i][j][k] = rand() % 255;
            }
        }
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < 3; k++){
                printf("%3d ", matriz3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            matriz2d[i][j] = (matriz3d[i][j][0] + matriz3d[i][j][1] + matriz3d[i][j][2]) / 3;
        }
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%3d ", matriz2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}