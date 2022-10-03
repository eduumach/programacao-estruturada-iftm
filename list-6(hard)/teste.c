#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));
    FILE *arquivo;
    arquivo = fopen("imagem.ppm", "w");
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "720 720\n");
    fprintf(arquivo, "255\n");

    int imagem[720][720][3];
    int i,j,k;
    for(i=0;i<720;i++){
        for(j=0;j<720;j++){
            for(k=0;k<3;k++){
                imagem[i][j][k] = rand() % 256;
                //printf("%2d ", imagem[i][j][k]);
                fprintf(arquivo, "%d ", imagem[i][j][k]);
            }
            //printf("\n");
        }
        //printf("\n");
    }

    fclose(arquivo);
    return 0;
}