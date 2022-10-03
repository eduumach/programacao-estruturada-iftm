// 01) Faça um programa que calcule o preço de skins da loja Rito Gomes. As skins custam 
// R$ 1,30 cada se forem compradas menos de dez skins, e R$ 1,00 se forem compradas dez ou 
// mais skins. Escreva um programa que leia o número de skins compradas, calcule e escreva 
// o custo total da compra. 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    float custo;
    printf("Digite o numero de skins: ");
    scanf("%d", &n);
    if (n < 10) {
        custo = n * 1.30;
    } else {
        custo = n * 1.00;
    }
    printf("O custo total da compra e: %.2f\n", custo);
    return 0;
}