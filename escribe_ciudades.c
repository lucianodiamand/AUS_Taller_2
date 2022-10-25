
#include <stdio.h>
#include <stdlib.h>

#define CANT 3

typedef struct {
    char nombre[20];
    float latitud;
    float longitud;
} ciudad;

int main(void) {
    FILE *archi = fopen("datos.txt", "w");
    if (archi == NULL) {
	printf("Error al abrir el archivo\n");
	return EXIT_FAILURE;
    }

    ciudad ciudades[CANT] = {
        { "Rosario", -32.9538138, -60.6401559 },
	{ "EntreRios", -32.6187609, -60.1491529 },
	{ "BsAs", -34.6794718, -58.8918048 }
    };

    for (int i = 0; i < CANT; i++) {
        fprintf(archi, "%s %f %f\n", ciudades[i].nombre, ciudades[i].latitud, ciudades[i].longitud);
    }

    fclose(archi);
    return EXIT_SUCCESS;
}

