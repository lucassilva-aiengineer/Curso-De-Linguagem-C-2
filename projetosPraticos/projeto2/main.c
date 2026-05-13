#include <stdio.h> 
#include <string.h>

int main(){

    // MAD LIBS Game 

    char noun[50] = "";
    char verb[50] = ""; 
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";



    printf("Enter an adjective (description): "); 
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; // Um carcacter que indica o final da string 
    
    // Uma string se trata de uma cadeia de caracteres. 

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; // Um carcacter que indica o final da string 

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin); 
    adjective1[strlen(adjective2) - 1] = '\0'; // Um carcacter que indica o final da string 

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; // Um carcacter que indica o final da string 


    printf("Enter an verb adjective (description): ");
    fgets(verb, sizeof(verb), stdin);


    // Consluindo 
    printf("%s\n", noun);
    printf("%s\n", verb);
    printf("%s")




    return 0;
}