// 02) Crie um programa que receba uma imagem colorida, e retorne quatro imagens. Cada uma das quatro imagens será 
// referente a um quarto da imagem original (superior esquerdo, superior direito, inferior esquerdo, inferior direito). 
// Conforme exemplo abaixo.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *arq = fopen(argv[1], "r");
    int col, lin, max, i, j, k, num;

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo");
        return 0;
    }

    char buffer[250], tipo;
    fgets(buffer, 250, arq);
    tipo = buffer[1];
    fgets(buffer, 250, arq);
    fscanf(arq, "%d %d", &col, &lin);
    fscanf(arq, "%d", &max);
    int matriz[lin][col][3];
    if (tipo == '3') {
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                for (k = 0; k < 3; k++) {
                fscanf(arq, "%d", &matriz[i][j][k]);
                }
            }
        }
    } else if (tipo == '2') {
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                fscanf(arq, "%d", &num);
                for (k = 0; k < 3; k++) {
                    matriz[i][j][k] = num;
                }
            }
        }
    }


    FILE *arq2 = fopen("quarto1.ppm", "w");
    fprintf(arq2, "P3\n");
    fprintf(arq2, "# a\n");
    fprintf(arq2, "%d %d\n", col/2, lin/2);
    fprintf(arq2, "%d\n", max);

    for(i = 0; i < lin/2 ; i++){
        for(j = 0; j < col/2; j++){
            for(k = 0; k < 3; k++){
                num = matriz[i][j][k];
                if (num < 0) {
                    num = 0;
                }else if (num > 255) {
                    num = 255;
                }
                fprintf(arq2, "%d ", num);
            }
        }
        fprintf(arq2, "\n");
    }

    FILE *arq3 = fopen("quarto2.ppm", "w");
    fprintf(arq3, "P3\n");
    fprintf(arq3, "# a\n");
    fprintf(arq3, "%d %d\n", col/2, lin/2);
    fprintf(arq3, "%d\n", max);

    for(i = 0; i < lin/2 ; i++){
        for(j = col/2; j < col; j++){
            for(k = 0; k < 3; k++){
                num = matriz[i][j][k];
                if (num < 0) {
                    num = 0;
                }else if (num > 255) {
                    num = 255;
                }
                fprintf(arq3, "%d ", num);
            }
        }
        fprintf(arq3, "\n");
    }

    FILE *arq4 = fopen("quarto3.ppm", "w");
    fprintf(arq4, "P3\n");
    fprintf(arq4, "# a\n");
    fprintf(arq4, "%d %d\n", col/2, lin/2);
    fprintf(arq4, "%d\n", max);

    for(i = lin/2; i < lin ; i++){
        for(j = 0; j < col/2; j++){
            for(k = 0; k < 3; k++){
                num = matriz[i][j][k];
                if (num < 0) {
                    num = 0;
                }else if (num > 255) {
                    num = 255;
                }
                fprintf(arq4, "%d ", num);
            }
        }
        fprintf(arq4, "\n");
    }

    FILE *arq5 = fopen("quarto4.ppm", "w");
    fprintf(arq5, "P3\n");
    fprintf(arq5, "# a\n");
    fprintf(arq5, "%d %d\n", col/2, lin/2);
    fprintf(arq5, "%d\n", max);

    for(i = lin/2; i < lin ; i++){
        for(j = col/2; j < col; j++){
            for(k = 0; k < 3; k++){
                num = matriz[i][j][k];
                if (num < 0) {
                    num = 0;
                }else if (num > 255) {
                    num = 255;
                }
                fprintf(arq5, "%d ", num);
            }
        }
        fprintf(arq5, "\n");
    }

    fclose(arq);
    fclose(arq2);
    fclose(arq3);
    fclose(arq4);
    fclose(arq5);

    return 0;
}
