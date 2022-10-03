// Faça um programa que receba a quantidade de vitórias, recebe a quantidade de derrotas, 
// recebe a quantidade de empates. Exibe na tela o nome da equipe (a sua escolha), a quantidade 
// de vitórias, derrotas e empates, e os respectivos percentuais. Ex.: 8 vitórias - 53%, 5 
// derrotas - 33%, 2 empates - 13%.

#include <stdio.h>

int main(){
    int vitorias, empate, derrotas;
    float total_partida;

    printf("Digite as vitorias da aquipe tio da padaria: ");
    scanf("%d", &vitorias);
    printf("Digite od empates da aquipe tio da padaria: ");
    scanf("%d", &empate);
    printf("Digite as derrotas da aquipe tio da padaria: ");
    scanf("%d", &derrotas);
    
    total_partida = vitorias + empate + derrotas;

    printf("\nEquipe tio da padaria: \n%.2f vitorias\n",(vitorias/total_partida)*100);
    printf("%.2f empates\n%.2f derrotas\n", (empate/total_partida)*100, (derrotas/total_partida)*100);
    return 0;
}