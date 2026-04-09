#include <stdio.h>
#include <stdbool.h>

int conteudo(){

    int idade = 25;
    int ano = 2026; 

    printf("Eu tenho %d de idade.\n", idade);
    printf("Estamos em %d.\n", ano);

    float peso; 

    peso = 65.0; 

    printf("Eu peso %.2f kg.", peso);

    float temperatura;
    temperatura = 28.5; 

    printf("\nA temperatura agora deve estar proximo de %.2fC°", temperatura);

    double pi = 3.14159265358979;    

    printf("\n Uma aproximacao de pi pode ser: %.15lf", pi);


    // Carcteres 

    char grade = 'A'; 
    printf("\nA minha nota: %c", grade); 

    char operacao = '%';
    printf("\nOperação de %c", operacao);

    // Uma string, array de carcteres. 

    char nome[] = "Marcos";
    printf("O nome dele: %s", nome); 


    // Boleanos 

    bool estaOnline = false; 

    if (estaOnline == true){
        printf("O cliente esta online\n");

    } else {

        printf("O cliente esta ofline\n");
    } 



    return 0; 
}




// Tipos mais comuns de dados 

// int = inteiro (4 bytes)
// float = numeros decimais 4 bytes 
// double = numeros decimais 8 bytes 
// char = caracter (1 byte)
// char[] = string ou array de carcteres (tamanho variável)
// bool = valor boleano (1 byte). 


// Como executar um arquivo c 
// Primeiro crie um executável 
// gcc variaveis.c -o variaveis
// .\variaveis.exe


void revisao(){


    float mediaGeral = 9.5;
    float preco = 100.50; 
    float temperatura = 300.50; 
    double pi = 3.14159265358979; 
    char nota = 'A';  
    char simbolo = '&'; 

    printf("Media geral: %.2f\n", mediaGeral);
    printf("Preco: %.2f\n", preco);
    printf("Temperatura: %.2f°\n", temperatura); 
    printf("O valor de pi: %.15lf\n", pi);
    printf("A sua nota: %c\n", nota); 
    printf("Simbolo: %c\n", simbolo);

    // Construíndo uma string, uma lista de carcteres, um array de carcteres. 

    char nome[] = "Mateus Silva"; 
    char email[] = "fake_email123@servidor.com";

    printf("Oi! O seu nome: %s\n", nome); 
    printf("O seu email: %s\n", email);

    // valores boleanos 

    bool climaAgradavel = true; 


    printf("Clima Agradavel: %d", climaAgradavel); 

    if (climaAgradavel == true){

        printf("Clima Agradavel!\n");

    } else {

        printf("Clima Nao Agradavel!\n");
    }

}


int main(){

    revisao(); 

    return 0;
}