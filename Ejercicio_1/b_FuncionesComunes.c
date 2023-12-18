#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_aleatorio = rand();
    printf("Numero aleatorio sin cambiar la semilla: %d\n", numero_aleatorio);

    srand(time(NULL));

    numero_aleatorio = rand();
    printf("Numero aleatorio despues de cambiar la semilla: %d\n", numero_aleatorio);

    return 0;
}