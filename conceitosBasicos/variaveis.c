#include <stdio.h>

int main(){

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

    return 0; 
}