#include <stdio.h>

int main() {
    FILE *archivo = fopen("archivo.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char texto[] = "Hola,Ruben";
    fprintf(archivo, "%s\n", texto);

    fclose(archivo);

    archivo = fopen("archivo.txt", "r");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char texto_leido[50];
    fscanf(archivo, "%s", texto_leido);
    printf("Texto leido del archivo: %s\n", texto_leido);

    fclose(archivo);
    return 0;
}