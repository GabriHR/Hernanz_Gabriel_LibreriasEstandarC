#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[] = "Hola Ruben";
    char cadena2[] = "Hola Ruben";
    char cadena3[] = "Air max 1";

    int resultado1 = strcmp(cadena1, cadena2);
    if(resultado1 == 0) {
        printf("Las cadenas '%s' y '%s' son iguales.\n", cadena1, cadena2);
    } else {
        printf("Las cadenas '%s' y '%s' son diferentes.\n", cadena1, cadena2);
    }

    int resultado2 = strcmp(cadena1, cadena3);
    if(resultado2 == 0) {
        printf("Las cadenas '%s' y '%s' son iguales.\n", cadena1, cadena3);
    } else {
        printf("Las cadenas '%s' y '%s' son diferentes.\n", cadena1, cadena3);
    }

    return 0;
}