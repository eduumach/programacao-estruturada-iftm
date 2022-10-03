// Faça uma função para verificar se um número é um Armstrong number ou não. 
// Um Armstrong number é um número onde a soma de todos os algarismos elevados
// a uma potência N (onde N é a quantidade de algarismos do número)
// é igual ao próprio número. Exemplo:


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_armstrong(int x) {
    int n = 0;
    int aux = x;
    int sum = 0;
    while (aux > 0) {
        aux /= 10;
        n++;
    }
    for(int i = 0; i < n; i++) {
        sum += pow(x % 10, n);
        x /= 10;
    }
    return sum;
}

int main( ){
    int numero, armstrong;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    armstrong = is_armstrong(numero);
    if (armstrong == numero) {
        printf("O numero %d eh um numero de Armstrong", numero);
    } else {
        printf("O numero %d nao eh um numero de Armstrong", numero);
    }
    return 0;
}