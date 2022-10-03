/*
06) Escreva um programa em C para fazer um padrão como uma pirâmide com um asterisco. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
   *
  * *
 * * *
* * * *

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
      printf("* ");
      cont++;
    }
    printf("\n");
  }
  return 0;
}