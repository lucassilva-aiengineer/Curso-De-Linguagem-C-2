#include <stdio.h>

// Operadores 

// Operadores Aritméticos. 

void operadoresAritmeticos(){


    int numeroA = 10;
    int numeroB = 20;  // Em divisões para obtermos resultado é importante termos um tipo de dados float

    // int resultado = 0; 

    // Adição 
    // int resultado = numeroA + numeroB;

    // Subtração 
    // int resultado = numeroA - numeroB; 


    // Multiplicação
    // int resultado = numeroA * numeroB; 


    // Divisao 
    float resultado = numeroA / numeroB;

    printf("%f", resultado);


}
int main(){

    operadoresAritmeticos();

    return 0;
}


// Como executar um arquivo em linguagem c? 

// Primeiro criamos um executável:
// gcc nome_arquivo.c -o nome_arquivo (nome do executável)

// Executando o executável:
// .\nome_arquivo.exe 

