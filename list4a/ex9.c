// Faça um código para imprimir uma data aleatória entre 01/01/2000 
// e 31/12/2022. Seu programa tem que considerar os anos bissextos. 
// Todo ano bissexto é divisível por 4.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int dia, mes, ano;
    ano = rand() % (2022 - 2000 + 1) + 2000;
    mes = rand() % (12 - 1 + 1) + 1;
    
    if(mes == 2 && ano % 4 == 0){
        dia = rand() % (29 - 1 + 1) + 1;
    }else {
        dia = rand() % (31 - 1 + 1) + 1;
    }

    printf("Data aleatória: %d/%d/%d", dia, mes, ano);
    
}