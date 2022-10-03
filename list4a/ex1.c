// 01) Faça o jogo de par ou ímpar novamente, porém single player (um jogador). Humano vs computador.
// O computador gera um número aleatório entre 0 e 5 (inclusive), e o jogador escolhe um número
// entre 0 e 5 (inclusive). Exiba todas as informações para verificar quem venceu.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int min=0, max=5, numero_jogador, numero_computador, resultado;
    srand(time(NULL));
    numero_computador = min + rand() % (min-max);;
    printf("Digite um numero de 0 a 5: ");
    scanf("%d", &numero_jogador);
    resultado = numero_computador+numero_jogador;
    printf("Numero jogador: %d\n", numero_jogador);
    printf("Numero computador: %d\n", numero_computador);
    printf("Soma: %d\n", resultado);

    if(resultado%2 == 0){
        printf("Deu Par!\n");
    }else{
        printf("Deu Impar!\n");
    }
    
    return 0;
}