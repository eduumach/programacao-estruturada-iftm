/*
09) Escreva um programa em C para exibir o padrão como o triângulo a seguir usando asteriscos. O usuário decide a altura dos triângulos fornecendo um número inteiro. Exemplo:

*
**
***
****
*****
****
***
**
*

*/
#include <stdio.h>

int main() {
  int i, j, n;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  int b = n - 1;
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  for (i=1; i <=n; i++){
    for(j=1; j<=b; j++){
      printf("*");
    }
    b--;
    printf("\n");
  }
  return 0;
}