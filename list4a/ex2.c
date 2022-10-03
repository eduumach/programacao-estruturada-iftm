// 02) Faça um jogo de pedra-papel-tesoura, single player, humano vs computador. O computador
// gera um número aleatório entre 0 e 2 (0 para pedra, 1 para papel, 2 para tesoura).
// O jogador escolhe uma das opções. Exiba todas as informações para verificar quem venceu.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int num, entrada; 
  int min = 0, max = 2; 

  num = min + rand() % (min-max);

  printf("\nEscola 1-Pedra 2-Papel 3-Tessousa: ");
  scanf("%i", &entrada); 

  switch (entrada){
  case (1):
    if (num==0){
      printf("Empate!! Pedra x Pedra");
    }
    else
      if(num==1)
      printf("Você Perdeu!! Papel X Pedra");
    else
        printf("Você ganhou! Pedra X Tessoura");
  return 0;
  break;
    
  case (2):
    if (num==0){
      printf("Você ganhou!! Papel x Pedra");
    }
    else
      if(num==1)
      printf("Empate!! Papel X Papel");
    else
        printf("Você perdeu! Papel X Tessoura");
  return 0;
  break;

  case (3):
    if (num==0){
      printf("Você perdeu!! Tessousa x Pedra");
    }
    else
      if(num==1)
      printf("Você ganhou!! Tessousa X Papel");
    else
        printf("Empate! Tessousa X Tessoura");
  return 0;
  break;
    
  default: 
    printf("Opcao invalida!!\n"); 
  }
}