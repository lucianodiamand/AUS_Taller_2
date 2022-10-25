
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *archi = fopen("entero.bin", "w");
    if (archi == NULL) {
	printf("Error al abrir el archivo\n");
	return EXIT_FAILURE;
    }

    int i = 10;
    fwrite(&i, sizeof(int), 1, archi);

    fclose(archi);
    return EXIT_SUCCESS;
}

