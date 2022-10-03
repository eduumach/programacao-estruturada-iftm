// Fazer um programa que receba um número inteiro, e verifique se ele está entre 100 e 200. 
// Se estiver dentro desta faixa, imprima “Você digitou um número entre 100 e 200”, 
// senão imprima “Você digitou um número fora da faixa”.

#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 200){
        printf("Você digitou um número entre 100 e 200\n");
    }else{
        printf("Você digitou um número fora da faixa\n");
    }

    return 0;
}