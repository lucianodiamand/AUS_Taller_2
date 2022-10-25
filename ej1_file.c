
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *archi;

    archi = fopen("salida.txt", "r");

    if (archi == NULL) {
        printf("Ups no pude leer el archivo\n");
	return EXIT_FAILURE;
    }

    printf("Iupi, pude leer el archivo\n");

    // aca usamos el archivo
    //int caracter = fputc('A', archi);
    int caracter = 255; //fgetc(archi);
    printf("%c\n", caracter);

    fclose(archi);

    return EXIT_SUCCESS;
}

