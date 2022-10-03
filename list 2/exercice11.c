// Faça um programa que imprima o nome de duas equipes e receba a quantidade de 
// vitórias, empates e derrotas de cada equipe. Cada vitória valem 3 pontos, cada empate 
// vale 1 ponto, derrota não vale ponto. Imprimir o nome de cada equipe (a sua escolha), o 
// número de vitórias, empates e derrotas, e a pontuação total.

#include <stdio.h>

int main(){
    int vitorias0, empate0, derrotas0, vitorias1, empate1, derrotas1, pontos0, pontos1;

    printf("Digite as vitorias da aquipe agua negra: ");
    scanf("%d", &vitorias0);
    printf("Digite od empates da aquipe agua negra: ");
    scanf("%d", &empate0);
    printf("Digite as derrotas da aquipe agua negra: ");
    scanf("%d\n", &derrotas0);

    printf("Digite as vitorias da aquipe tio da padaria: ");
    scanf("%d", &vitorias1);
    printf("Digite od empates da aquipe tio da padaria: ");
    scanf("%d", &empate1);
    printf("Digite as derrotas da aquipe tio da padaria: ");
    scanf("%d", &derrotas1);

    
    pontos0 = vitorias0*3 + empate0;
    pontos1 = vitorias1*3 + empate1;

    printf("Equipe agua negra: \n%d vitorias\n",vitorias0);
    printf("%d empates\n%d derrotas\n%d total de pontos.\n\n", empate0, derrotas0, pontos0);

    printf("Equipe tio da padaria: \n%d vitorias\n",vitorias1);
    printf("%d empates\n%d derrotas\n%d total de pontos.\n", empate1, derrotas1, pontos1);

    return 0;
}