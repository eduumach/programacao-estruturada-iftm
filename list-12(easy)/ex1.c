// Faça um programa que leia uma imagem colorida, e faça uma cópia desta imagem conforme o exemplo abaixo. 
// Uma parte central da imagem será em escala de cinza.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  FILE *arquivo = fopen(argv[1], "r");
  FILE *araracopia = fopen(argv[2], "w");

  if (!arquivo) {
    printf("Erro ao abrir o arquivo.\n");
    return 0;
  } else {
    int i, j, k, meio, soma, colunas, linhas, vmax;
    char buffer[250]; 
    fgets(buffer, 250, arquivo);
    fgets(buffer, 250, arquivo);
    fscanf(arquivo, "%d %d", &colunas, &linhas);
    fscanf(arquivo, "%d", &vmax);

    int matriz[linhas][colunas][3];

    for (i = 0; i < linhas; i++) {
      for (j = 0; j < colunas; j++) {
        for (k = 0; k < 3; k++) {
          fscanf(arquivo, "%d", &matriz[i][j][k]);
        }
      }
    }
    
    fprintf(araracopia, "P3\n");
    fprintf(araracopia, "# a\n");
    fprintf(araracopia, "%d %d\n", colunas, linhas);
    fprintf(araracopia, "%d\n", 255);
    
    int div_coluna = (int)colunas / 9;
    int div_linha = (int)linhas / 9;

    for (i = div_linha * 2; i < linhas - div_linha * 2; i++) {
      for (j = div_coluna * 2; j < colunas - div_coluna * 2; j++) {
        soma = 0;
        for (k = 0; k < 3; k++) {
          soma += matriz[i][j][k];
        }
        matriz[i][j][0] = (int)soma / 3;
        matriz[i][j][1] = (int)soma / 3;
        matriz[i][j][2] = (int)soma / 3;
      }
    }

    for (i = 0; i < linhas; i++) {
      for (j = 0; j < colunas; j++) {
        for (k = 0; k < 3; k++) {
          fprintf(araracopia, "%d ", matriz[i][j][k]);
        }
      }
    }
    fclose(araracopia);
  }
}
