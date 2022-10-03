/*
05) Escreva um programa em C para fazer um padrão como uma pirâmide com números aumentados de 1 em 1. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <stdio.h>


int main() {
  int i, j, n, cont =1, quantidadeDeEspaco;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  quantidadeDeEspaco = n;
  for (i = 1; i <= n; i++){
    for(int espaco = 0;  espaco <= quantidadeDeEspaco; espaco++){
      printf(" ");
    }
    quantidadeDeEspaco--;
    for(j=1; j<=i; j++){
      printf("0%i ", cont);
      cont++;
    }
    printf("\n");
  }
  return 0;
}