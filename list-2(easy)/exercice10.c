// Fazer um programa que receba três stats do jogador: vida, ataque e defesa. 
// A experiência do jogador (XP) é a média entre os três stats. Imprima o nível do jogador conforme 
// a seguir (0 a 25 XP) novato, (26 a 50 XP) mago, (51 a 75 XP) mago supremo, (76 a 100 XP)  lorde 
// das magias.

#include <stdio.h>

int main(){
    float vida, ataque, defesa, xp;

    printf("Digite a vida do jogador: ");
    scanf("%f", &vida);
    printf("Digite o ataque do jogador: ");
    scanf("%f", &ataque);
    printf("Digite a defesa do jogador: ");
    scanf("%f", &defesa);

    xp = (vida + ataque + defesa)/3;

    if (xp >=0 && xp <= 25){
        printf("Jogador eh novato.\n");
    } else if (xp>= 26 && xp <= 50){
        printf("Jogador eh um mago.\n");
    }else if (xp>= 51 && xp <= 75){
        printf("Jogador eh um mago supremo.\n");
    } else if (xp>= 76 && xp <= 100){
        printf("Jogador eh um lorde das magias.\n");
    }else{
        printf("Tem algo errado ai!\n");
    }
    
    

    return 0;
}