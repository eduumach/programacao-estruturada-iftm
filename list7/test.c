// convolutional network

#include <stdio.h>
#include<stdlib.h>


int main(){

    int i, j,k,l, linha_matriz =6, coluna_matriz = 6, linha_kernel = 3, coluna_kernel = 3, cont_linha, cont_coluna, maxValue;

    long long int soma = 0;

    FILE* img = fopen("columns.ascii.pgm", "r");

    fscanf(img, "%*s %d %d %d", &linha_matriz, &coluna_matriz, &maxValue);

    int matriz[coluna_matriz][linha_matriz];

    for(i = 0; i < linha_matriz; i++){
        for(j = 0; j < coluna_matriz; j++){
            fscanf(img, "%d", &matriz[i][j]);
        }
    }
                        
    int kernel[3][3] = {{-1,-1,1},{-1,4,-1},{-1,-1,-1}};
    long int products[linha_kernel][coluna_kernel];
    int convolutional[linha_matriz-2][linha_matriz-2];

    for(i = 1; i < linha_matriz-1; i++){
        for(j = 1; j < coluna_matriz-1; j++){
            for(k = i-1; k < i-1 +linha_kernel; k++){
                for(l = j-1; l < j-1 + coluna_kernel; l++){
                    products[k][l] = matriz[k][l] * kernel[k][l];
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
    // for(i = 0; i < linha_matriz-2; i++){
    //     for(j=0; j < coluna_matriz-2; j++){
    //         printf("%d ", convolutional[i][j]);
    //     }
    //         printf("\n");
    // }

    FILE* img2 = fopen("columns_ma.ascii.pgm", "w");

    fprintf(img2, "P2\n");
    fprintf(img2, "# Autor: Eduardo\n");//comentario é opcional
    fprintf(img2, "%d %d \n", linha_matriz-2, coluna_matriz-2);
    fprintf(img2, "%d \n", maxValue);

    for(i = 0; i < linha_matriz-2; i++){
        for(j=0; j < coluna_matriz-2; j++){
            fprintf(img2, "%lld ", convolutional[i][j]);
        }
            fprintf(img2, "\n");
    }
    return 0;
}