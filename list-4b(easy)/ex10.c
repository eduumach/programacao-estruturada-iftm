/*10) Escreva um programa em C para exibir o padrão como o triângulo a seguir usando números. O usuário decide a altura dos triângulos fornecendo um número inteiro. Exemplo:

1
22
333
4444
55555
4444
333
22
1
*/

#include <stdio.h>

int main() {
  int i, j, n;
  printf("Digite a altura do triangulo: ");
  scanf("%i", &n);
  int b = n - 1;
  for (i=1; i <=n; i++){
    for(j=1; j<=i; j++){
      printf("%i", i);
    }
    printf("\n");
  }
  for (i = b; i >= 1; i--){
    for(j=1; j<=b; j++){
      printf("%i", i);
    }
    b--;
    printf("\n");
  }
  return 0;
}