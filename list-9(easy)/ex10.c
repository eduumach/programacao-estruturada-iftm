// Faça um programa para gerar uma imagem colorida com as seguintes especificações:
// Dimensões 100px de altura por 60px de largura
// Todos os pixels da imagem serão aleatórios de acordo com os seguintes intervalos:
// Linhas 0 até 19. Pixels entre 0 e 55.
// Linhas 20 até 39. Pixels entre 45 e 105.
// Linhas 40 até 59. Pixels entre 95 e 155.
// Linhas 60 até 79. Pixels entre 145 e 205.
// Linhas 80 até 99. Pixels entre 195 e 255.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    FILE *arq;
    int i, j, k;
    int a[100][60][3];
    srand(time(NULL));
    arq = fopen(argv[1], "w");
    fprintf(arq, "P3\n");
    fprintf(arq, "60 100\n");
    fprintf(arq, "255\n");

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 60; j++) {
            for (k = 0; k < 3; k++) {
                if (i >= 0 && i <= 19) {
                    a[i][j][k] = rand() % 56;
                } else if (i >= 20 && i <= 39) {
                    a[i][j][k] = rand() % 61 + 45;
                } else if (i >= 40 && i <= 59) {
                    a[i][j][k] = rand() % 61 + 95;
                } else if (i >= 60 && i <= 79) {
                    a[i][j][k] = rand() % 61 + 145;
                } else if (i >= 80 && i <= 99) {
                    a[i][j][k] = rand() % 61 + 195;
                }
                fprintf(arq, "%d ", a[i][j][k]);
            }
        }
        fprintf(arq, "\n");
    }
}