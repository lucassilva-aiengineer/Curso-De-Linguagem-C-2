#include <stdio.h>
#include <string.h>


void testeInicial(){

    int idade; 
    float mediaGeral;  
    char nota;
    char nome[20]; 


    
    // É possível que haja valores associados ao espaço de memória alocado 
    // mesmo que ainda tenhamos atribuido valor a estas variáveis. 

    printf("%d\n", idade);
    printf("%f\n", mediaGeral);
    printf("%c\n", nota);
    printf("%s\n", nome); 

}

int main(){


    // Por segurança já atribuímos valores as variáveis . 

    int idade; 
    float mediaGeral;  
    char nota;
    char nome[20];
    char nomeCompleto[50]; 


    
    // É possível que haja valores associados ao espaço de memória alocado 
    // mesmo que ainda tenhamos atribuido valor a estas variáveis. 

    // Recebendo as entradas de usuário. 

    printf("Indique a sua idade: ");
    scanf("%d", &idade); 

    printf("Indique a sua media geral: ");
    scanf("%f", &mediaGeral);

    printf("Indique a sua nota: ");
    scanf(" %c", &nota); 

    printf("Indique o seu nome: ");
    scanf("%s", nome); 

    // LIMPEZA DE BUFFER: Consome o '\n' que o scanf anterior deixou para trás
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    
    printf("Indique o seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    // Removendo o buffer 
    nomeCompleto[strlen(nomeCompleto) - 1] = '\0'; // Lembre-se strings são cadeias de caracteres. 

    printf("Idade: %d\n", idade);
    printf("Media Geral: %f\n", mediaGeral);
    printf("Nota: %c\n", nota);
    printf("Primeiro Nome: %s\n", nome); 
    printf("Nome Completo: %s\n", nomeCompleto);


    return 0;
}