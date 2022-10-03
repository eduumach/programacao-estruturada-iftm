// Faça um programa com duas funções (teto e piso). Essas funções 
// recebem como entrada um valor real (double ou float). A 
// função teto retorna o valor da entrada arredondado para cima. 
// A função piso retorna o valor de entrada arredondado para baixo. Exemplo:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int teto(double x) {
    return ceil(x);
}

int piso(double x) {
    return floor(x);
}

int main(){
    double x;
    printf("Digite um valor para x: ");
    scanf("%lf", &x);
    printf("Teto: %d \t Piso: %d", teto(x), piso(x));
    return 0;
}