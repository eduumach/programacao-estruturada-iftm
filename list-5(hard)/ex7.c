// Faça um programa que imprima na tela todos os números Armstrong 
// que são também números felizes, entre 1 e 500.

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

int happy_number(int x) {
    int sum = 0;
    while (x > 0) {
        sum += pow(x % 10, 2);
        x /= 10;
    }
    return sum;
}

int eh_felis(int x) {
    int happy;
    happy = happy_number(x);
    for (int i = 0; i < 100; i++) {
        happy = happy_number(happy);
        if (happy == 1) {
            break;
        }
    }
    if (happy == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    for (int i = 1; i <= 500; i++) {
        if (is_armstrong(i) == 1 && eh_felis(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}