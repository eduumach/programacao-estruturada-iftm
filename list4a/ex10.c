//  Faça um programa que gere dois números inteiros aleatórios entre 
// 0 e 99 (inclusive). O usuário deve digitar a soma desses números.
//  O programa deve informar se o resultado digitado pelo usuário 
// está correto ou incorreto.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num1, num2, soma, soma_usuario;
    num1 = rand() % (99 + 1);
    num2 = rand() % (99 + 1);
    soma = num1 + num2;

    printf("Digite a soma de %d e %d: ", num1, num2);
    scanf("%d", &soma_usuario);

    if(soma == soma_usuario){
        printf("Soma correta!");
    }else{
        printf("Soma incorreta! O certo seria %d", soma);
    }
}