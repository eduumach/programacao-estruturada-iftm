/*
04) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com número aumentado de 1 em 1. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
1
2 3
4 5 6
7 8 9 10

*/
#include <stdio.h>

int main() {
  int i, j, n, cont =1;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("%i ", cont);
      cont++;
    }
    printf("\n");
  }
  return 0;
}