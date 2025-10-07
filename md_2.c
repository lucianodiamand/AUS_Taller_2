
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int latitud;
    int longitud;
} posicion;


int main(void) {
    posicion *pp = (posicion*) malloc(sizeof(posicion));
    pp->latitud = 10;
    pp->longitud = 20;

    free(pp);
    return 0;
}

