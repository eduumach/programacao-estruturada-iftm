// Faça um código que receba números inteiros do usuário, e grave em um arquivo esses números, juntamente com as informações 
// se ele é positivo ou negativo, se ele é par ou ímpar. O programa só termina se o usuário digitar 0 (zero). Exemplo:
// 5 -> positivo ímpar
// -2 -> negativo par
// 8 -> positivo par

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    FILE *arquivo = fopen(argv[1], "w");
    int num;
    while(1){
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        if(num > 0){
            fprintf(arquivo, "%d -> positivo ", num);
        }else{
            fprintf(arquivo, "%d -> negativo ", num);
        }
        if(num % 2 == 0){
            fprintf(arquivo, "par.\n");
        }else{
            fprintf(arquivo, "ímpar.\n");
        }
    }
    return 0;
}

