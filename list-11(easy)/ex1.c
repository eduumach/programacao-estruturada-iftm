// open file pgm

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

    FILE *image = fopen(argv[1], "r");
    FILE *destino = fopen(argv[2], "w");
    
    int i, j, k, col, lin, col1, lin1, vmax, value, soma, num;

    char buffer[255];
    fgets(buffer, 255, image);
    fgets(buffer, 255, image);
    fscanf(image, "%d %d", &col, &lin);
    fscanf(image, "%d", &vmax);

    lin1 = lin;
    col1 = col;

    int matriz[lin][col][3];

    printf("%d %d ", col, lin);
    

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            soma = 0;
            for(k = 0; k < 3; k++){
                fscanf(image, "%d", &matriz[i][j][k]);
                soma += matriz[i][j][k];
            }
            matriz[i][j][0] = soma/3;
            matriz[i][j][1] = soma/3;
            matriz[i][j][2] = soma/3;
        }
    }

    printf("%d %d", col1, lin1);

    fprintf(destino, "P3\n");
    fprintf(destino, "%d %d\n", col1, lin1);
    fprintf(destino, "%d\n", vmax);

    for(i = 0; i < lin1; i++){
        for(j = 0; j < col1; j++){
            switch (matriz[i][j][0] / 17){
            case 0:
                fprintf(destino, "61 43 31\n");
                break;
            case 1:
                fprintf(destino, "47 79 79\n");
                break;
            case 2:
                fprintf(destino, "17 17 17\n");
                break;
            case 3:
                fprintf(destino, "8 77 110\n");
                break;
            case 4:
                fprintf(destino, "109 53 26\n");
                break;
            case 5:
                fprintf(destino, "169 169 169\n");
                break;
            case 6:
                fprintf(destino, "218 112 214\n");
                break;
            case 7:
                fprintf(destino, "166 170 62\n");
                break;
            case 8:
                fprintf(destino, "240 128 128\n");
                break;
            case 9:
                fprintf(destino, "255 105 180\n");
                break;
            case 10:
                fprintf(destino, "255 255 240\n");
                break;

            case 11:
                fprintf(destino, "255 255 224\n");
                break;
            case 12:
                fprintf(destino, "255 255 0\n");
                break;
            case 13:
                fprintf(destino, "245 255 251\n");
                break;
            case 14:
                fprintf(destino, "245 255 250\n");
                break;
            case 15:
                fprintf(destino, "218 112 214\n");
                break;
            default:
                break;
            }
        }
    }
    fclose(image);
    fclose(destino);
    return 0;
}
