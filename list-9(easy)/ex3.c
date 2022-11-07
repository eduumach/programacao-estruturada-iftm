// Crie um arquivo com o nome "imagem3.ppm". O conteúdo desse arquivo deve ser exatamente como orientado. Primeira linha: P3. 
// Segunda linha: #imagem3.ppm. Terceira linha: 100 100. Quarta linha: 255. A partir da quinta linha: Gere uma matriz 100x300 
// com números aleatórios entre 0 e 255.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    FILE *arq;
    int i, j,k, matriz[100][100][3];

    srand(time(NULL));

    arq = fopen("imagem.ppm", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arq, "P3\n");
    fprintf(arq, "#imagem.ppm\n");
    fprintf(arq, "100 100\n");
    fprintf(arq, "255\n");

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            for(k = 0; k < 3; k++){
                matriz[i][j][k] = rand() % 256;
                fprintf(arq, "%d ", matriz[i][j][k]);
            }
        }
        fprintf(arq, "\n");
    }

    fclose(arq);
    return 0;
}