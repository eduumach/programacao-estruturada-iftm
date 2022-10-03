// Faça um jogo no qual o jogador tem que escolher uma dentre quatro classes diferentes:
// - Guerreiro
// - Mago
// - Druida
// - Sacerdote
// Depois o jogador tem que escolher um dentre quatro territórios/regiões diferentes:
// - Azeroth
// - Azkaban
// - Aurora
// - Brightwood
// Depois o jogador tem que escolher um dentre quatro armas diferentes:
// - Machado cego
// - Picareta invertida
// - Adaga sem ponta
// - Corrente sem elo
// No fim o jogo deve exibir uma mensagem única com todas as escolhas que o jogador fez. Exemplo:
// Você agora é um Mago da região de Aurora armado com um Machado cego.

#include <stdio.h>

int main(){
    int classe, territorio, arma;

    printf("Escolha a classe: \n");
    printf("1 Guerreiro\n2 Mago\n3 Druida\n4 Sacerdote\n");
    scanf("%d", &classe);
    printf("Escolha um territorio: ");
    printf("\n1 Azeroth\n2 Azkaban\n3 Aurora\n4 Brightwood\n");
    scanf("%d", &territorio);
    printf("Escolha uma arma: \n");
    printf("1 Machado cego\n2 Picareta invertida\n3 Adaga sem ponta\n4 Corrente sem elo\n");
    scanf("%d", &arma);

    printf("\n\nVocê agora é um ");

    switch (classe){
    case 1:
        printf("Guerreiro");
        break;
    case 2:
        printf("Mago");
        break;
    case 3:
        printf("Druida");
        break;
    case 4:
        printf("Sacerdote");
        break;
    default:
        printf("Nada");
        break;
    }

    printf(" região de ");

    switch (territorio){
    case 1:
        printf("Azeroth");
        break;
    case 2:
        printf("Azkaban");
        break;
    case 3:
        printf("Aurora");
        break;
    case 4:
        printf("Brightwood");
        break;
    default:
        printf("Nada");
        break;
    }

    printf(" armado com um ");

    switch (arma){
    case 1:
        printf("Machado cego");
        break;
    case 2:
        printf("Picareta invertida");
        break;
    case 3:
        printf("Adaga sem ponta");
        break;
    case 4:
        printf("Corrente sem elo");
        break;
    default:
        printf("Nada");
        break;
    }

    printf(".\n");

    return 0;
}