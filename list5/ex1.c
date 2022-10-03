// Em redes neurais artificiais, a função de ativação de um neurônio
//  define a saída desse neurônio de acordo com uma entrada
//  ou conjunto de entradas. Em um único código implemente
//  as seguintes funções de ativação abaixo:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define E 2.71828

int step(int x) {
    if (x >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int sigmoid(int x) {
    return 1 / (1 + pow(E, -x));
}

int hiperbolic_tangent(int x) {
    return (pow(E, x) - pow(E, -x)) / (pow(E, x) + pow(E, -x));
}

int sigmoid_linear(int x) {
    return x / 1 + pow(E , -x);
}

int gaussian(int x) {
    return pow(E, -pow(x, 2));
}

int main() {
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Step: %d \t Sigmoid: %d \t Hiperbolic Tangent: %d \t Sigmoid Linear: %d \t Gaussian: %d", step(x), sigmoid(x), hiperbolic_tangent(x), sigmoid_linear(x), gaussian(x));
    return 0;
}
