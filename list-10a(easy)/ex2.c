// Faça um código que faça um espelhamento horizontal de uma imagem. O programa deve aceitar tanto imagens coloridas 
// quanto imagens em escala de cinza. Utilize a linha de comando para entrar com o nome do arquivo de entrada e o do arquivo de saída.

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

    FILE *arq2 = fopen("espelho.ppm", "w");
    fprintf(arq2, "P3\n");
    fprintf(arq2, "# a\n");
    fprintf(arq2, "%d %d\n", col, lin);
    fprintf(arq2, "%d\n", max);

    for(i = 0; i < lin; i++){
        for(j = col -1 ; j >= 0; j--){
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

        