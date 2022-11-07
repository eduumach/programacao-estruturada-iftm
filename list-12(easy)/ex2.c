// Faça um programa que leia uma imagem colorida, e faça a conversão desta imagem para escala de cinza. 
// Depois, com a imagem em escala de cinza, gere outras imagens coloridas, porém com cores aleatórias. 
// Para cada tom de cinza, gere uma cor colorida aleatória.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv){
    srand(time(NULL));

    FILE *image = fopen(argv[1], "r");
    FILE *destino = fopen(argv[2], "w");
    
    int i, j, k, col, lin, col1, lin1, vmax, value, soma, num, color[14][3];

    for (i = 0; i < 14; i++){
        for (j = 0; j < 3; j++){
            color[i][j] = rand() % 256;
        }
    }

    char buffer[255];
    fgets(buffer, 255, image);
    fgets(buffer, 255, image);
    fscanf(image, "%d %d", &col, &lin);
    fscanf(image, "%d", &vmax);

    lin1 = lin;
    col1 = col;

    int matriz[lin][col][3];

    printf("%d %d ", col, lin);
    

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            soma = 0;
            for(k = 0; k < 3; k++){
                fscanf(image, "%d", &matriz[i][j][k]);
                soma += matriz[i][j][k];
            }
            matriz[i][j][0] = soma/3;
            matriz[i][j][1] = soma/3;
            matriz[i][j][2] = soma/3;
        }
    }

    printf("%d %d", col1, lin1);

    fprintf(destino, "P3\n");
    fprintf(destino, "%d %d\n", col1, lin1);
    fprintf(destino, "%d\n", vmax);

    for(i = 0; i < lin1; i++){
        for(j = 0; j < col1; j++){
            num = matriz[i][j][0]/17;
            for(k = 0; k < 3; k++){
                fprintf(destino, "%d ", color[num][k]);
            }
        }
    }
    fclose(image);
    fclose(destino);
    return 0;
}
