// Crie um arquivo com o nome "imagem2.pgm". O conteúdo desse arquivo deve ser exatamente como orientado. Primeira linha: P2. 
// Segunda linha: #imagem2.pgm. Terceira linha: 100 100. Quarta linha: 255. A partir da quinta linha: Gere uma matriz 100x100 
// com números aleatórios entre 0 e 255.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE *arq;
    int i, j, matriz[100][100];

    srand(time(NULL));

    arq = fopen("imagem.pgm", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arq, "P2\n");
    fprintf(arq, "#imagem.pgm\n");
    fprintf(arq, "100 100\n");
    fprintf(arq, "255\n");

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            matriz[i][j] = rand() % 256;
            fprintf(arq, "%d ", matriz[i][j]);
        }
        fprintf(arq, "\n");
    }

    fclose(arq);
    return 0;
}