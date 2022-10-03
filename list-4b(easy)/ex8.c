/*
08) Escreva um programa em C para exibir o padrão como dois triângulos de ângulo
reto usando asteriscos. O usuário decide a altura dos triângulos fornecendo um
número inteiro. Exemplo:
    * *
   ** **
  *** ***
 **** ****
***** *****

*/

#include <stdio.h>

int main() {
  int i, j, n, quantidadeDeEspaco;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  quantidadeDeEspaco = n;
  
  for (i = 1; i <= n; i++) {
    for (int espaco = 0; espaco <= quantidadeDeEspaco; espaco++) {
      printf(" ");
    }
    quantidadeDeEspaco--;
    
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf(" ");
    
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}