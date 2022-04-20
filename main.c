#include <stdio.h>
#include <ctype.h>

int main () {
    char caracter, caracterAlterado;

    while((caracter = getchar()) != EOF){
        if (islower(caracter))
        {
            caracterAlterado = toupper(caracter);
            printf("%c", caracterAlterado);
        } else if (isupper(caracter))
        {
            caracterAlterado = tolower(caracter);
            printf("%c", caracterAlterado);
        } else if (isdigit(caracter))
        {
            // No imprimo nada
        } else {
            printf("%c", caracter);
        }
    };

    printf("\n");


    
    return 0;
}