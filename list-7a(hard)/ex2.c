// 02) Faça um programa para resolver as quatro operações básicas
//  entre matrizes (adição, subtração, multiplicação, multiplicação escalar).
//  Gere duas matrizes (2x2 ou 3x3) com valores aleatórios para testar as operações.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define SCALAR 1 / 2.0

int main(){
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], soma[SIZE][SIZE], multiplicacao[SIZE][SIZE], subtracao[SIZE][SIZE];
    int i, j, k;
    double scalar[SIZE][SIZE];
    srand(time(NULL));

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            subtracao[i][j] = matriz1[i][j] - matriz2[i][j];
            scalar[i][j] = SCALAR * matriz1[i][j];
        }
    }

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            multiplicacao[i][j] = 0;
            for (k = 0; k < SIZE; k++){
                multiplicacao[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("MATRIZ 1\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ 2\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMULTIPLICACAO\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%3d ", multiplicacao[i][j]);
        }
        printf("\n");
    }

    printf("\nSUBTRACAO\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%3d ", subtracao[i][j]);
        }
        printf("\n");
    }

    printf("\nSOMA\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%3d ", soma[i][j]);
        }
        printf("\n");
    }

    printf("\nSCALAR 1/2\n");

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%.1f ", scalar[i][j]);
        }
        printf("\n");
    }
}