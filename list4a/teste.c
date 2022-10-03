#include <stdio.h>
#include <stdlib.h>
#include <time.h>


long int fatorail(int n){
    long fat;
    for(fat = 1; n > 1; n = n - 1){      
        fat = fat * n;
    }
    return fat;
}

int main(){
    double soma=0.0;

    for( int i = 0; i < 21; i++){
        soma = soma + 1.0/fatorail(i);
        printf("%d %.16lf\n", i, soma); 
    }
    
    return 0;
}