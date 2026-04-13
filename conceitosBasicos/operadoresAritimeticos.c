#include <stdio.h> 

// Operadores aritiméricos
// São simbolos matemáticos que indicam algumas operações. 
// (=, +, -, *, /, %, ++, --)
// = Operador de atribuição. 

int main(){

    int numeroA = 10; 
    int numeroB = 20; 

    float numeroC = 5; 
    float numeroD = 2; 

    // double resultado = numeroA + numeroB;
    double resultado = numeroA - numeroB;
    // double resultado = numeroA * numeroB; 
    // double resultado = numeroC / numeroD; 

    // printf("Resultado: %lf", resultado);

    // Decrementando e incrementando valores. 

    numeroA ++; 

    printf("Resultado: %d\n", numeroA);

    numeroA --; 
    numeroA --;
    numeroA --; 

    printf("Resultado: %d\n", numeroA); 

    

    return 0; 
}