#include <stdio.h> 
#include <string.h>

int main(){

    // MAD LIBS Game 

    char noun[50] = "";
    char verb[50] = ""; 
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";


    printf("Indique o substantivo: ");
    fgets(noun, sizeof(noun), stdin);

    printf("Indique um adjetivo: ");
    fgets(adjective1, sizeof(adjective1), stdin); 


    printf("Indique o verbo: ");
    fgets(verb, sizeof(verb), stdin); 

    // printf("O %s %s esta %s", noun, adjective1, verb);


    return 0;
}