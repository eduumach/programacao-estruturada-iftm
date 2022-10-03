/*
02) Escreva um programa em C para exibir o padrão como um triângulo de ângulo reto com um número. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
1
12
123
1234

*/
#include <stdio.h>

int main() {
  int i, j, n;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("%i", j);
    }
    printf("\n");
  }
  return 0;
}