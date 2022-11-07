// Faça um programa para gerar um arquivo de imagem em escala de cinza (.pgm) onde cada linha da imagem tem um valor aleatório
//  entre 0 e 255. A dimensão de imagem deve ser de 100 linhas por 100 colunas. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *image = fopen("image.pgm", "w");
    int i, j, number, matriz[100][100];

    srand(time(NULL));

    fprintf(image, "P2\n");
    fprintf(image, "#image.pgm\n");
    fprintf(image, "100 100\n");
    fprintf(image, "255\n");

    for(i = 0; i < 100; i++) {
        number = rand() % 256;
        for(j = 0; j < 100; j++) {
            matriz[i][j] = number;
            fprintf(image, "%d ", matriz[i][j]);
        }
        fprintf(image, "\n");
    }
}