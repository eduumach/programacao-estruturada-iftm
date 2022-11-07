// Crie um array 3D (10x10) com valores aleatórios entre 0 e 255.


#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 10


int main(){
    int matriz[SIZE][SIZE][3];
    int i, j, k;
    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < 3; k++){
                matriz[i][j][k] = rand() % 255;
            }
        }
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < 3; k++){
                printf("%3d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}