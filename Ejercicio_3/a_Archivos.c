#include <stdio.h>

int main() {
    FILE *archivo = fopen("archivo.txt", "r");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fclose(archivo);
    return 0;
}