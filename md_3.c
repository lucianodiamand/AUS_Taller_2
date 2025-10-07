
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *nombre;
    char *apellido;
} persona;

int main(void) {
    persona *pp = (persona*) malloc(sizeof(persona));
    pp->nombre = (char*) malloc(25 * sizeof(char));
    pp->apellido = (char*) malloc(25 * sizeof(char));
    fgets(pp->nombre, 25, stdin);
    fgets(pp->apellido, 25, stdin);

    printf("%s, %s\n", pp->apellido, pp->nombre);
    free(pp->apellido);
    free(pp->nombre);
    free(pp);
    return 0;
}

