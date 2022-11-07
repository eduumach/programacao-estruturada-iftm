// Faça um programa para gerar uma imagem conforme a figura abaixo:
// A imagem tem cinco tons de cinza (0, 64, 128, 192, 255). Cada cor da imagem contém 20 pixels de altura e 60 pixels de largura. 
// A imagem tem no total 100px de altura por 60px de largura.


#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *image = fopen("image.pgm", "w");
    int i, j, matriz[100][60];

    fprintf(image, "P2\n");
    fprintf(image, "#image.pgm\n");
    fprintf(image, "60 100\n");
    fprintf(image, "255\n");

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 60; j++) {
            if(i < 20) {
                matriz[i][j] = 0;
            } else if(i < 40) {
                matriz[i][j] = 64;
            } else if(i < 60) {
                matriz[i][j] = 128;
            } else if(i < 80) {
                matriz[i][j] = 192;
            } else {
                matriz[i][j] = 255;
            }
            fprintf(image, "%d ", matriz[i][j]);
        }
        fprintf(image, "\n");
    }
}