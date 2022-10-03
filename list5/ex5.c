//  Faça um programa que imprima na tela todos os números felizes entre 1 e 500.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int happy_number(int x) {
    int sum = 0;
    while (x > 0) {
        sum += pow(x % 10, 2);
        x /= 10;
    }
    return sum;
}

int main( ){
    int happy;
    for (int i = 1; i <= 500; i++) {
        happy = happy_number(i);
        for (int j = 0; j < 100; j++) {
            happy = happy_number(happy);
            if (happy == 1) {
                printf("%d ", i);
                break;
            }
        }
    }
    return 0;
}
