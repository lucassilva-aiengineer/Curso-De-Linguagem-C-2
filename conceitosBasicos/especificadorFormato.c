#include <stdio.h>

// Específicadores de formato 

void introducaoAssunto(){

    int idade = 25;   /* controla caracteríscas do acesso aos valores alocados na memória 
                     específica o acesso ao tipo de dado que será acessado. */

    float preco = 10;
    double pi = 3.1415926535; 
    char moeda = '$'; 
    char nome[] = "Marcos"; 


    printf("%d\n", idade);
    printf("%f\n", preco);
    printf("%lf\n", pi);
    printf("%c\n", moeda);
    printf("%s\n", nome); 

}

void comprimentoImpressao(){

    int num1 = 1; 
    int num2 = -20;
    int num3 = 100; 

    // printf("%3d\n", num1);
    // printf("%3d\n", num2);
    // printf("%3d\n", num3);

    // Indicando o sinal negativo alinharemos os números 
    // pela esquerda 

    
    // printf("%-3d\n", num1);
    // printf("%-3d\n", num2);
    // printf("%-3d\n", num3);

    // Preenchendo os epaços com números zeros.

        
    // printf("%03d\n", num1);
    // printf("%03d\n", num2);
    // printf("%03d\n", num3);

    // o sinal de positivo indica o sinal do número 
    // na impressao. 


    printf("%+3d\n", num1);
    printf("%+3d\n", num2);
    printf("%+3d\n", num3);


}   

void precisaoImpressao(){

    // E perfeitamente possível formatar a quantidade de 
    // casas decimais serão exibidas após a vírgula. 

    float numero = 10.5;
    float numeroB = 100.50;
    float numeroC = 2010.589; 

    printf("%.2f\n", numero);
    printf("%.2f\n", numeroB);
    printf("%.2f\n", numeroC);


}


void juntandoTudo(){

    
    float numero = 10.5;
    float numeroB = 100.50;
    float numeroC = 2010.589; 


    printf("%+7.2f\n", numero);
    printf("%+7.2f\n", numeroB);
    printf("%+7.2f\n", numeroC);


}


void revisandoTudo(){

    int idade = 25; 
    float preco = 19.99; 
    double pi = 3.1415926535; 
    char currency = '$'; 
    char nome[] = "Michel Silva"; 

    printf("%d\n", idade);
    printf("%f\n", preco); 
    printf("%lf\n", pi);
    printf("%c\n", currency); 
    printf("%s\n", nome); 

    // Também podemos formatar as nossas saídas. 

}

int main(){



    // Comprimento do que será impresso 
    // Formatação

    // introducaoAssunto(); 

    // comprimentoImpressao();

    // precisaoImpressao();

    juntandoTudo();




    return 0; 

}