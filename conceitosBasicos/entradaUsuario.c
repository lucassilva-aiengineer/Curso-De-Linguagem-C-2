#include <stdio.h> 


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

    int idade = 0; 
    float mediaGeral = 0.0f;  
    char nota = '\0';
    char nome[20] = ""; 


    
    // É possível que haja valores associados ao espaço de memória alocado 
    // mesmo que ainda tenhamos atribuido valor a estas variáveis. 

    // Recebendo as entradas de usuário. 

    printf("Indique a sua idade: ");
    scanf("%d", &idade); 

    printf("Indique a sua media geral: ");
    scanf("%f", &mediaGeral);

    printf("Indique a sua nota: ");
    scanf(" %c", &nota); 


    printf("%d\n", idade);
    printf("%f\n", mediaGeral);
    printf("%c\n", nota);
    printf("%s\n", nome); 



    return 0;
}