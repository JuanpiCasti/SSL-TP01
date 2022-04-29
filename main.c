// Juan Pablo Castiglione

#include <stdio.h>
#include <ctype.h>

int main () {
    char caracter;

    while((caracter = getchar()) != EOF){
        if (islower(caracter))
        {
            putchar(toupper(caracter));
        } else if (isupper(caracter))
        {
            putchar(tolower(caracter));
        } else if (isdigit(caracter))
        {
            // No imprimo nada
        } else {
            putchar(caracter);
        }
    };

    /* printf("\n") Era para que la salida no quede pegada con la linea de comandos,
    pero tecnicamente seria como un caracter de mas (pensando tambien en la salida a un archivo).
    */

    return 0;
}