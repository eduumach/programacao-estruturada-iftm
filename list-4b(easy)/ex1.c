/*
01) Escreva um programa em C para exibir o padrão como triângulo de ângulo reto usando um asterisco. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
*
**
***
****

*/
#include <stdio.h>

int main() {
  int i, j, n;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}