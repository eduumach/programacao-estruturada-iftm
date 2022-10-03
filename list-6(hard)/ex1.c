// Faça uma função que receba um array como parâmetro, e retorne 
// outro array cujos valores são o quadrado do array de entrada. 


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void quadrado(float numeros[], int tamanho){
    float quadrado[tamanho];
    for(int i = 0; i < tamanho; i++){
        quadrado[i] = pow(numeros[i], 2);
        printf("%.2f ", quadrado[i]);
    }
}

int main(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    float numeros[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);
    }
    quadrado(numeros, tamanho);
    return 0;
}
