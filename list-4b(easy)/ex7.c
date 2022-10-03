/*
07) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com número diminuindo de 1 em 1. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo:
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1

*/
#include <stdio.h>

int main() {
  int i, j, n, cont =1;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);

  int b = n;
  
  for (i=1; i <=n; i++){
    for(j = b; j >= 1; j--){
      printf("%i ", j);
    }
    b--;
    printf("\n");
  }
  return 0;
}