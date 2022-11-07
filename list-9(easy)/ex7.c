// Faça um programa para gerar um arquivo de imagem em escala de cinza (.pgm) onde cada linha da imagem tem um tom de cinza
//  (começando do zero e indo até o 255). A imagem deve ter a dimensão de 256 linhas por 100 colunas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *image = fopen("image.pgm", "w");
    int i, j, matriz[256][100];

    fprintf(image, "P2\n");
    fprintf(image, "#image.pgm\n");
    fprintf(image, "256 100\n");
    fprintf(image, "255\n");

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 256; j++) {
            matriz[i][j] = j;
            fprintf(image, "%d ", matriz[i][j]);
        }
        fprintf(image, "\n");
    }
}