//  Faça um programa que leia um arquivo de texto qualquer e imprima seu conteúdo 
// na tela, e no fim do conteúdo exiba a quantidade total de linhas do arquivo.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *file = fopen(argv[1], "r");
    char buffer[250];
    int count = 0;

    while (!feof(file)){
        fgets(buffer, 250, file);
        printf("%s", buffer);
        count++;
    }

    printf("\nO arquivo teve %d linhas.", count);

}