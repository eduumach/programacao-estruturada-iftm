// Crie um arquivo com o nome "imagem.pbm". O conteúdo desse arquivo deve ser exatamente como orientado. Primeira linha: P1. 
// Segunda linha: #imagem.pbm. Terceira linha: 100 100. A partir da quarta linha: Gere uma matriz 100x100 com números 
// inteiros aleatórios entre 0 e 1.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE *arq;
    int i, j, matriz[100][100];

    srand(time(NULL));

    arq = fopen("imagem.pbm", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arq, "P1\n");
    fprintf(arq, "#imagem.pbm\n");
    fprintf(arq, "100 100\n");

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            matriz[i][j] = rand() % 2;
            fprintf(arq, "%d ", matriz[i][j]);
        }
        fprintf(arq, "\n");
    }

    fclose(arq);
    return 0;
}
