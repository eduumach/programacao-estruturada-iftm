#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int qnt, min, max, maiuscula, minuscula, especial, numeros, tamanho, type, aleatorio;
    int stop = 1;
    srand(time(NULL));

    FILE *senhas = fopen("teste.txt", "w");

    printf("Informe a quantidade de senhas: ");
    scanf("%d", &qnt);
    printf("Informe a quantidade mínima de caracteres das senhas: ");
    scanf("%d", &min);
    printf("Informe a quantidade máxima de caracteres das senhas: ");
    scanf("%d",&max);
    printf("As senhas terão letras maiúsculas? (1 para sim, 0 para não): ");
    scanf("%d", &maiuscula);
    printf("As senhas terão letras minúsculas? (1 para sim, 0 para não): ");
    scanf("%d", &minuscula);
    printf("As senhas terão caracteres especiais? (1 para sim, 0 para não): ");
    scanf("%d",&especial);
    printf("As senhas terão números? (1 para sim, 0 para não): ");
    scanf("%d", &numeros);

    for(int i = 0; i < qnt; i++){
        tamanho = min + rand() % (min - max);

        while (tamanho > 0){
            type = 1 + rand() % (1 - 4);
            
            switch (type){
            case 1:
                if(maiuscula == 1){
                    fprintf(senhas, "%c", 65 + rand() % (65 - 90));
                    tamanho--;
                }
                break;
            case 2:
                if(minuscula == 1){
                    fprintf(senhas, "%c", 97 + rand() % (97 - 122));
                    tamanho--;
                }
                break;
            case 3:
                if(especial == 1){
                    aleatorio = 1 + rand() % (1 - 4);

                    if(aleatorio = 1){
                        fprintf(senhas, "%c", 33 + rand() % (33 - 47));
                    }else if(aleatorio = 2){
                        fprintf(senhas, "%c", 58 + rand() % (58 - 64));
                    }else if(aleatorio = 3){
                        fprintf(senhas, "%c", 91 + rand() % (91 - 96));
                    }else{
                        fprintf(senhas, "%c", 123 + rand() % (123 - 126));
                    }
                    tamanho--;
                }
                break;
            case 4:
                if(numeros == 1){
                        fprintf(senhas, "%c", 48 + rand() % (48 - 59));
                        tamanho--;
                    }
                break;
            default:
                break;
            }
        }

        fprintf(senhas, "\n");
        
    }

    fclose(senhas);
}