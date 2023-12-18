#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[] = {10, -4, 0, -18, 30};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    for(int i = 0; i < longitud; i++) {
        int valor_absoluto = abs(numeros[i]);
        printf("El valor absoluto de %d es: %d\n", numeros[i], valor_absoluto);
    }

    return 0;
}