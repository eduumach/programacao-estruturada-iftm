// Faça um código que grave em um arquivo os números de 0 a 99, porém apenas dez números por linha.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
    FILE *arquivo = fopen(argv[1], "w");
    int i, num, count;
    srand(time(NULL));
    count = 0;
    for(i = 0; i <100; i++){
        fprintf(arquivo, "%d ", i);
        if(count == 10){
            fprintf(arquivo, "\n");
            count = 0;
        }
        count++;
    }

    return 0;
}