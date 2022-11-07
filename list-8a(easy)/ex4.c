// Faça um código que escreva todos os números entre 1 e 50 em romanos em um arquivo. 
// Um número por linha no seguinte formato: 1 :: I; 2 :: II; 3 :: III; 4 :: IV; etc.

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){


    FILE *arquivo = fopen(argv[1], "w");
    int i, j;
    for(j = 1; j <= 50; j++){
        fprintf(arquivo, "%d :: ", j);
        i = j;
        while (i != 0){
            if(i >= 1000){
                fprintf(arquivo, "M");
                i -= 1000;
            }else if(i >= 900){
                fprintf(arquivo, "CM");
                i -= 900;
            }else if(i >= 500){
                fprintf(arquivo, "D");
                i -= 500;
            }else if(i >= 400){
                fprintf(arquivo, "CD");
                i -= 400;
            }else if(i >= 100){
                fprintf(arquivo, "C");
                i -= 100;
            }else if(i >= 90){
                fprintf(arquivo, "XC");
                i -= 90;
            }else if(i >= 50){
                fprintf(arquivo, "L");
                i -= 50;
            }else if(i >= 40){
                fprintf(arquivo, "XL");
                i -= 40;
            }else if(i >= 10){
                fprintf(arquivo, "X");
                i -= 10;
            }else if(i >= 9){
                fprintf(arquivo, "IX");
                i -= 9;
            }else if(i >= 5){
                fprintf(arquivo, "V");
                i -= 5;
            }else if(i >= 4){
                fprintf(arquivo, "IV");
                i -= 4;
            }else if(i >= 1){
                fprintf(arquivo, "I");
                i -= 1;
            }
        }
        fprintf(arquivo, "\n");
    }        

}