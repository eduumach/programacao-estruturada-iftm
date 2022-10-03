#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void scanFileAndPrint(FILE *pokemons){
    int i;
    char buffer[250];

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        printf("%da linha: %s\n", buffer);
        printf("\n");
    }

    fclose(pokemons);
}

void countLines(FILE *pokemons){
    int count = 0;
    char buffer[250];

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        count++;
    }
    printf("Ele possui %d linhas.", count);

}

void findWithLetter(FILE *pokemons, char letter){
    char buffer[250];

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        if(buffer[0] == letter){
            printf("%s\n", buffer);
        }
    }
}

void NameFirstAndLastEqual(FILE *pokemons){
    char buffer[250];
    int j;

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        if(buffer[0] == toupper(buffer[strlen(buffer)-2])){
            printf("%s\n", buffer);
        }
    }   
}

void FindByGenerater(char family, FILE *pokemons){
    int count = 0;
    char buffer[250];

    
    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        if(count > 0 && count < 151 && family == 'a'){
            printf("%s", buffer);
        } else if(count > 150 && count < 251 && family == 'b'){
            printf("%s", buffer);
        } else if(count > 250 && count < 386 && family == 'c'){
            printf("%s", buffer);
        } else if(count > 385 && count < 494 && family == 'd'){
            printf("%s", buffer);
        } else if(count > 493 && count < 650 && family == 'e'){
            printf("%s", buffer);
        } else if(count > 649 && count < 722 && family == 'f'){
            printf("%s", buffer);
        } else if(count > 721 && count < 809 && family == 'g'){
            printf("%s", buffer);
        }
        count++;
    }
    
}



int main(){

    int stop = 1;
    FILE *pokemons = fopen("./en_pokemon.txt", "r");

    FindByGenerater('b', pokemons);
    // while (stop){
        
    // }
    
    // rewind(pokemons);
    
    return 0;
}