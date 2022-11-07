// Criação de texto aleatório. Gere um número aleatório entre 10 e 20 para linhas do texto. Para cada linha 
// gere um número aleatório entre 5 e 20 para palavras. Para cada palavra gere um número aleatório 
// entre 1 e 15 para letras. Essas letras devem ser aleatórias (tabela ASCII). Grave o texto em um arquivo.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    FILE *arquivo = fopen(argv[1], "w");
    int i, j, k, linhas, palavras, letras;

    linhas = rand() % 11 + 10;
    for(i = 0; i < linhas; i++){
        palavras = rand() % 16 + 5;
        for(j = 0; j < palavras; j++){
            letras = rand() % 16 + 1;
            for(k = 0; k < letras; k++){
                fprintf(arquivo, "%c", rand() % 26 + 97);
            }
            fprintf(arquivo, " ");
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}