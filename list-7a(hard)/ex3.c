// convolutional network

#include <stdio.h>
#include<stdlib.h>


int main(){
    int i, j,k,l, linha_matriz =6, coluna_matriz = 6, linha_kernel = 3, coluna_kernel = 3, cont_linha, cont_coluna, soma;
    // int matriz[linha_matriz][coluna_matriz];
    // int kernel[linha_kernel][coluna_kernel];
    int matriz[6][6] = {1,1,1,1,1,1,
                        1,0,0,0,0,0,
                        1,1,1,1,0,0,
                        1,1,1,1,0,0,
                        1,0,0,0,0,0,
                        1,1,1,1,1,1};
                        
    int kernel[3][3] = {{1,-1,1},{-1,4,-1},{1,-1,1}};
    int products[linha_kernel][coluna_kernel];
    int convolutional[linha_matriz-2][linha_matriz-2];

    for(i = 1; i < linha_matriz-1; i++){
        for(j = 1; j < coluna_matriz-1; j++){
            cont_linha = 0;
            for(k = i-1; k < i-1 +linha_kernel; k++){
                cont_coluna = 0;
                for(l = j-1; l < j-1 + coluna_kernel; l++){
                    products[cont_linha][cont_coluna] = matriz[k][l] * kernel[cont_linha][cont_coluna];
                }
            }
            soma = 0;
            for(k = 0; k < linha_kernel; k++){
                for(l = 0; l < coluna_kernel; l++){
                    soma += products[k][l];
                }
            }
            convolutional[i-1][j-1] = soma;
        }
    }
    for(i = 0; i < linha_matriz-2; i++){
        for(j=0; j < coluna_matriz-2; j++){
            printf("%d ", convolutional[i][j]%255);
        }
            printf("\n");
    }
    return 0;
}