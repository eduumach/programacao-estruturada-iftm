// Crie uma função que receba como parâmetro dois arrays do tipo double. 
// Retorne 1 se os arrays forem iguais, retorne 0 se forem diferentes.

#include<stdio.h>
#include<stdlib.h>

int compara(double array1[], double array2[], int tamanho1, int tamanho2){
    if(tamanho1 != tamanho2){
        return 0;
    }

    for(int i = 0; i < tamanho1; i++){
        if(array1[i] != array2[i]){
            return 0;
        }
    }

    return 1;
}


int main(){
    int tamanho1, tamanho2;
    printf("Digite o tamanho do primeiro array: ");
    scanf("%d", &tamanho1);
    double array1[tamanho1];
    for(int i = 0; i < tamanho1; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%lf", &array1[i]);
    }
    printf("Digite o tamanho do segundo array: ");
    scanf("%d", &tamanho2);
    double array2[tamanho2];
    for(int i = 0; i < tamanho2; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%lf", &array2[i]);
    }
    printf("%d\n", compara(array1, array2, tamanho1, tamanho2));
}