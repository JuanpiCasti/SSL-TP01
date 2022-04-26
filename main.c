// Juan Pablo Castiglione

#include <stdio.h>
#include <ctype.h>

int main () {
    char caracter;

    while((caracter = getchar()) != EOF){
        if (islower(caracter))
        {
            printf("%c", toupper(caracter));
        } else if (isupper(caracter))
        {
            printf("%c", tolower(caracter));
        } else if (isdigit(caracter))
        {
            // No imprimo nada
        } else {
            printf("%c", caracter);
        }
    };

    /* printf("\n") Era para que la salida no quede pegada con la linea de comandos,
    pero tecnicamente seria como un caracter de mas (pensando tambien en la salida a un archivo).
    */

    return 0;
}