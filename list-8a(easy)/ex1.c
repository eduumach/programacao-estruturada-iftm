// Faça um código que grave em um arquivo 100 números aleatórios entre -100 e 100.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
    FILE *arquivo = fopen(argv[1], "w");
    int i, num;
    srand(time(NULL));
    for(i = 0; i <100; i++){
        fprintf(arquivo, "%d\n", rand() % 201 - 100);
    }
}