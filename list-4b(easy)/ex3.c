/*
03) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com um número que repetirá um número em uma linha. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
1
22
333
4444

*/
#include <stdio.h>

int main() {
  int i, j, n;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("%i", i);
    }
    printf("\n");
  }
  return 0;
}