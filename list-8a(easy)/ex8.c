// Faça um programa que leia esse 
// arquivo de texto e imprima seu conteúdo na tela com a numeração de cada linha.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *file = fopen(argv[1], "r");
    char buffer[250];
    int count = 1;

    while (!feof(file)){
        fgets(buffer, 250, file);
        printf("%d. %s", count, buffer);
        count++;
    }

}