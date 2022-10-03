// 03) Faça um jogo de adivinhação. Gere um número aleatório entre 0 e 100. 
// O jogador tem cinco chances de acertar o número. A cada tentativa, o jogo informa ao 
// jogador se o número que ele tentou é menor ou maior do que o número que foi gerado. 
// Quando acertar, informe ao jogador que ele acertou e encerre o jogo.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));
    int min = 0, max = 100, num_gerado, stop = 0, numero_digitado, tentativa = 0;

    num_gerado = min + rand() % (min-max);

    while (stop == 0){
        printf("Tente acertar o numero: ");
        scanf("%d", &numero_digitado);

        if(numero_digitado > 100 || numero_digitado<0){
            printf("Numero fora da ordem!\n");
        }else if(numero_digitado == num_gerado){
            printf("Aeee! O numero eh: %d\n",num_gerado);
            stop = 1;
        }else if(tentativa == 5){
            printf("Poxa... Não foi dessa vez. O numero era: %d", num_gerado);
            stop = 1;
        }else{
            printf("Hm... Não foi dessa vez, vamos tentar novamente!\n");
            tentativa++;
        }
    }
    


    return 0;
}
