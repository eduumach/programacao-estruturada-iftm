// Crie um programa que receba uma imagem colorida, e retorne essa mesma imagem porém em escala de cinza. Utilize a 
// linha de comando para entrar com o nome do arquivo de entrada e o nome do arquivo de saída. Imagem colorida 
// para escala de cinza: g(x,y) = (R+G+B)/3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *arq = fopen(argv[1], "r");
    int col, lin, max, i, j, k;

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo");
        return 0;
    }

    char buffer[250];
    fgets(buffer, 250, arq);
    fgets(buffer, 250, arq);
    fscanf(arq, "%d %d", &col, &lin);
    fscanf(arq, "%d", &max);
    int matriz[lin][col][3], cinza[lin][col];

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            for(k = 0; k < 3; k++) {
                fscanf(arq, "%d", &matriz[i][j][k]);
            }
        }
    }

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            cinza[i][j] = (matriz[i][j][0] + matriz[i][j][1] + matriz[i][j][2]) / 3;
        }
    }

    FILE *arq2 = fopen(argv[2], "w");
    fprintf(arq2, "P2\n");
    fprintf(arq2, "# a\n");
    fprintf(arq2, "%d %d\n", col, lin);
    fprintf(arq2, "%d\n", max);

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            fprintf(arq2, "%d ", cinza[i][j]);
        }
        fprintf(arq2, "\n");
    }

    fclose(arq);
    fclose(arq2);
    
    return 0;
}
