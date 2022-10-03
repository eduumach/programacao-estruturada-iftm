// 07) Faça um código para gerar 3 números aleatórios entre 100 e
//  999 e que sejam divisíveis por 5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int cont = 0,min = 0, max = 100, num_gerado;

    while(1){
        num_gerado = min + rand() % (min-max);
        if(cont == 3){
            break;
        }
        if(num_gerado%3 == 0){
            printf("%d ", num_gerado);
            cont++;
        }
    }
    

    return 0;
}