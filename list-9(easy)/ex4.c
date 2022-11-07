// Faça um programa para gerar um arquivo de imagem monocromática (.pbm) para gerar um arquivo para cada número do 0 ao 9.
// Faça um programa apenas que gerará todos os arquivos. Não faça um programa para cada arquivo. 
// Os nomes dos arquivos devem seguir o padrão 0.pbm, 1.pbm, 2.pbm, etc.
// O tamanho de cada imagem deve ser 10 pixels de altura e 7 pixels de largura. 
// Informações sobre o formato pbm podem ser encontradas aqui. 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, j, k, matriz[100][100];

    srand(time(NULL));

    FILE *files[9];
    for (int k = 0; k < 10; k++){
        char filename[5];
        sprintf(filename, "%d.pbm", k);
        files[k] = fopen(filename, "w");

        fprintf(files[k], "P1\n");
        fprintf(files[k], "#imagem.pbm\n");
        fprintf(files[k], "100 100\n");

        for(i = 0; i < 100; i++) {
            for(j = 0; j < 100; j++) {
                matriz[i][j] = rand() % 2;
                fprintf(files[k], "%d ", matriz[i][j]);
            }
            fprintf(files[k], "\n");
        }
    }
    return 0;
}
