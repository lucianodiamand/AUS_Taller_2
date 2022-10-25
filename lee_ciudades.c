

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *archi = fopen("datos.txt", "r");
    if (archi == NULL) {
	printf("Error al abrir el archivo\n");
	return EXIT_FAILURE;
    }

    char c[20];
    float latitud;
    float longitud;

    while (feof(archi) == 0) {
      fscanf(archi, "%s %f %f\n", c, &latitud, &longitud);
      printf("Se detecto un ovni en la ciudad %s con latitud %f y longitud %f\n", c, latitud, longitud);
    }

    fclose(archi);
    return EXIT_SUCCESS;
}

