#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>


void scanFileAndPrint(){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
    int i = 1;
    char buffer[250];

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        printf("%d a linha: %s",i, buffer);
        i++;
    }
    fclose(pokemons);
}

void countLines(){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
    int count = 0;
    char buffer[250];

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        count++;
    }
    printf("Ele possui %d linhas.", count);

}

void findWithLetter(char letter){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
    char buffer[250];

    if(letter >= 97 && letter <= 122){
        letter -= 32;
    }else if(!(letter >= 65 && letter <= 90)){
        printf("Letra invalida.");
        return;
    }

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        if(buffer[0] == letter){
            printf("%s\n", buffer);
        }
    }
}

void NameFirstAndLastEqual(){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
    char buffer[250];
    int j;

    while(!feof(pokemons)){
        fgets(buffer, 250, pokemons);
        if(buffer[0] == toupper(buffer[strlen(buffer)-2])){
            printf("%s\n", buffer);
        }
    }   
}

void FindByGenerater(char family){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
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

void findById(int id){
    FILE *pokemons = fopen("./en_pokemon.txt", "r");
    char buffer[250];
    for(int i = 0; i < id; i++){
        fgets(buffer, 250, pokemons);
    }
    printf("ID: %d\n", id);
    printf("Nome: %s\n", buffer);

    if(id > 0 && id < 151){
        printf("Geração: I\b");
        printf("Região: Kanto\n");
    } else if(id > 150 && id < 251){
        printf("Geração: II\n");
        printf("Região: Johto\n");
    } else if(id > 250 && id < 386){
        printf("Geração: III\n");
        printf("Região: Hoenn\n");
    } else if(id > 385 && id < 494){
        printf("Geração: IV\n");
        printf("Região: Sinnoh\n");
    } else if(id > 493 && id < 650){
        printf("Geração: V\n");
        printf("Região: Unova\n");
    } else if(id > 649 && id < 722){
        printf("Geração: VI\n");
        printf("Região: Kalos\n");
    } else if(id > 721 && id < 809){
        printf("Geração: VII\n");
        printf("Região: Alola\n");
    }
    printf("Imagem: https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/%d.png\n", id);
}



int main(){

    int id, option = 0;
    

    while (option != 8){
    printf("\n\n1 - Ler arquivo e imprimir na tela.\n2 - Contar quantas linhas possui.\n"); 
    printf("3 - Imprimir nomes que começam com uma letra.\n4 - Imprimir nomes que começam e terminam com a mesma letra.\n"); 
    printf("5 - Imprimir nomes de acordo com a geração.\n6 - Exibir um pokemon aleatorio.\n7 - Exibir um pokemon com ID.\n");
    printf("8 - Sair.\n9 - Limpar tela.\n");    
    scanf("%d", &option);

    switch (option){
        case 1:
            scanFileAndPrint();
            break;
        case 2:
            countLines();
            break;
        case 3:
            char letter;
            printf("Digite uma letra: ");
            scanf(" %c", &letter);
            findWithLetter(letter);
            break;
        case 4:
            NameFirstAndLastEqual();
            break;
        case 5:
            char family;
            printf("Digite uma letra: ");
            scanf(" %c", &family);
            FindByGenerater(family);
            break;
        case 6:
            srand(time(NULL));
            id = rand() % 809;
            findById(id);
            break;
        case 7:
            printf("Digite um ID: ");
            scanf("%d", &id);
            if(id > 0 && id < 809){
                findById(id);
            } else {
                printf("ID invalido.\n");
            }
            break;
        case 8:
            printf("Saindo...\n");
            break;
        case 9:
            system("clear");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    }
    
    return 0;
}