
#include <stdio.h>
#include <stdlib.h>

#define CANT 3

typedef struct {
    char nombre[20];
    float latitud;
    float longitud;
} ciudad;

int main(void) {
    FILE *archi = fopen("datos.bin", "r");
    if (archi == NULL) {
	printf("Error al abrir el archivo\n");
	return EXIT_FAILURE;
    }

    ciudad ciudades[CANT];

    //size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    fread(ciudades, sizeof(ciudad), CANT, archi);

    for (int i = 0; i < CANT; i++) {
	printf("La ciudad %s en la ubicacion lat: %f, lon: %f ...\n", 
		ciudades[i].nombre, ciudades[i].latitud, ciudades[i].longitud);
    }

    fclose(archi);
    return EXIT_SUCCESS;
}

