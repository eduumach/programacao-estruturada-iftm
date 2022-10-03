// 08) Gerador de bilhetes da mega-sena. Gere 6 números
//  aleatórios entre 1 e 60, sem repetições.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int cont = 0,min = 0, max = 100, num_gerado;
    int a1, a2, a3, a4, a5, a6;

    while(cont < 6){
        num_gerado = rand() % (max - min + 1) + min;
        if(num_gerado != a1 && num_gerado != a2 && num_gerado != a3 && num_gerado != a4 && num_gerado != a5 && num_gerado != a6){
            if(cont == 0){
                a1 = num_gerado;
            }else if(cont == 1){
                a2 = num_gerado;
            }else if(cont == 2){
                a3 = num_gerado;
            }else if(cont == 3){
                a4 = num_gerado;
            }else if(cont == 4){
                a5 = num_gerado;
            }else if(cont == 5){
                a6 = num_gerado;
            }
            cont++;
        }
    }

    printf("Bilhete da mega-sena: %d %d %d %d %d %d ", a1, a2, a3, a4, a5, a6);



    
}