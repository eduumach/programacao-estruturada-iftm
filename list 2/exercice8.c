// Faça um programa que peça o tamanho de um arquivo para download (em MB) e a 
// velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado 
// de download do arquivo usando este link (em minutos).

#include <stdio.h>

int main(){
    float velocidade, tamanho, tempo;
    printf("Digite o tamanho do arquivo: ");
    scanf("%f", &tamanho);

    printf("Digite a velocidade da sua internet: ");
    scanf("%f", &velocidade);

    tempo = ((tamanho*8)/velocidade)/60;

    printf("A velocidade em minutos eh: %f\n", tempo);

    return 0;
}