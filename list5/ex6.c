// Faça um programa que imprima na tela todos os números Armstrong entre 1 e 10000.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_armstrong(int x) {
    int n = 0;
    int aux = x;
    int sum = 0;
    int num = x;
    while (aux > 0) {
        aux /= 10;
        n++;
    }
    for(int i = 0; i < n; i++) {
        sum += pow(x % 10, n);
        x /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    for (int i = 1; i <= 10000; i++) {
        if (is_armstrong(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}