// Crie um programa que receba uma imagem colorida, e retorne essa mesma imagem porém metade colorida e metade em escala
// de cinza (na diagonal conforme o exemplo abaixo). Utilize a linha de comando para entrar com
// o nome do arquivo de entrada e o nome do arquivo de saída.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *arq = fopen(argv[1], "rb");
    int i, j, k, largura, altura, max, r, g, b, media, soma;
    char buffer[250];

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    fgets(buffer, 250, arq);
    fgets(buffer, 250, arq);
    fscanf(arq, "%d %d", &largura, &altura);
    fscanf(arq, "%d", &max);
    int matriz[altura][largura][3];

    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            for (k = 0; k < 3; k++) {
                fscanf(arq, "%d", &matriz[i][j][k]);
            }
        }
    }

    for (i = 0; i < altura; i++) {
        for (j = 0; j < i; j++) {
            soma = 0;
            for (k = 0; k < 3; k++) {
                soma = matriz[i][j][k];
            }
            media = soma / 3;
            for (k = 0; k < 3; k++) {
                matriz[i][j][k] = media;
            }
        }
    }

    FILE *arq2 = fopen("cinza.ppm", "wb");
    fprintf(arq2, "P3\n");
    fprintf(arq2, "# a\n");
    fprintf(arq2, "%d %d\n", largura, altura);
    fprintf(arq2, "255\n");

    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            for(k = 0; k < 3; k++){
                fprintf(arq2, "%d ", matriz[i][j][k]);
            }
        }
        fprintf(arq2, "\n");
    }

    fclose(arq);
    fclose(arq2);

    return 0;
}
    