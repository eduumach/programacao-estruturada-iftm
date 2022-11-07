// Faça um programa que gere um arquivo (.pbm) com uma imagem de um labirinto de tamanho 11x11 conforme a figura a seguir.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE *arq;
    int i;

    arq = fopen("labirinto.pbm", "w");

    fprintf(arq, "P1\n");
    fprintf(arq, "#labirinto.pbm\n");
    fprintf(arq, "11 11\n");

    for(i = 0; i < 11; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 9; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    for(i = 0; i < 9; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 9; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    for(i = 0; i < 9; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "\n");
    for(i = 0; i < 4; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 4; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "\n");
    for(i = 0; i < 3; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 3; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 3; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    fprintf(arq, "%d ", 0);
    for(i = 0; i < 7; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "%d ", 0);
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    fprintf(arq, "%d ", 1);
    for(i = 0; i < 9; i++) {
        fprintf(arq, "%d ", 0);
    }
    fprintf(arq, "%d ", 1);
    fprintf(arq, "\n");
    for(i = 0; i < 11; i++) {
        fprintf(arq, "%d ", 1);
    }
    fprintf(arq, "\n");

    fclose(arq);
    return 0;
}
