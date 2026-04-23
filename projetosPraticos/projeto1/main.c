#include <stdio.h>


int main(){

    char nomeItem[20]; 
    float preco = 0.0f; 
    int quantidade = 0;
    char moedaCorrente = 'R';
    float precoTotal = 0.0f; 

    printf("Indique o nome do produto: ");
    fgets(nomeItem, sizeof(nomeItem), stdin); 

    printf("Indique o preco do produto que voce quer comprar: ");
    scanf("%f", &preco); 

    printf("Indique a quantidade de %s que voce quer comprar: ", nomeItem);
    scanf("%d", &quantidade); 

    // printf("Indique a moeda corrente: ");
    // scanf("%c", &moedaCorrente); 

    precoTotal = preco * quantidade; 
    
    printf("========= Nota Fiscal ==========\n");

    printf("%s  - %f x %d", nomeItem, preco, quantidade);git add 
    // printf("Total: %f", precoTotal);
    

    return 0; 
}