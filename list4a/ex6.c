// 06) Faça um código que gere 10 números aleatórios entre 0 e 100.
//  Imprima em uma única linha, com os números separados por espaços.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min = 0, max = 100;

    for(int i = 0; i < 10; i++){
        printf("%d ", min + rand() % (min-max));
    }

    return 0;
}