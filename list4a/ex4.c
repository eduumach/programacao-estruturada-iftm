// 04) Faça um jogo no estilo disputa de pênaltis. O gol é dividido em nove partes. Computador
//  é o goleiro. Jogador é o chutador. O chutador escolhe uma posição para chutar (1 a 9)
//  e o goleiro escolhe uma posição para defender (1 a 9). Se a defesa do goleiro for igual
//  ao chute do jogador, defendeu!!! Se for diferente, gol!!! Tente desenhar o gol para seu
//  jogo vender mais na play store.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min = 1, max = 9, num_gerado, num_digitado;

    num_gerado = min + rand() % (min-max);

    printf("Digite um numero: ");
    scanf("%d", &num_digitado);

    if(num_gerado == num_digitado){
        printf("GOOLLL!\n");
    }else{
        printf("ERROUU!\n");
    }

    printf("==================================\n");

    for (int i = 1; i <= 9; i++){
        
        if((i-1) % 3 ==0 && i-1 != 0){
            printf("|\n");
        }

        if(i == num_digitado){
            printf("| %d ", num_digitado);
        }else if(num_gerado == i){
            printf("| %d ", num_gerado);
        }else {
            printf("| - ");
        }
    }

    printf("|\n");
    

    return 0;
}