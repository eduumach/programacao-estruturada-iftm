//Crie um array de três dimensões (3D) com três linhas e três colunas (3x3) com valores aleatórios entre 0 e 9

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    int matriz[3][3][3];
    int i, j, k;
    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                matriz[i][j][k] = rand() % 10;
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}