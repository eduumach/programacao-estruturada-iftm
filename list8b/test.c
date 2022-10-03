#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char b[3] = {'a', 'b', 'c'};
    char a[5] = {'0','.', 'p', 'p', 'm'};
    for(int i = 0; i < 3; i++){
        a[0] = b[i];
        printf("%s ", a);
    }
    return 0;
}