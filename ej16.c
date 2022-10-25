
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Alumno {
    // Los datos que representan a un alumno
    char nombre[20];
    char apellido[20];
    int edad;
    int notas[3];
} alumno;

int main(void) {
    alumno *pal;

    pal = (alumno*) malloc(sizeof(alumno));
    // pal = (struct alumno*) malloc(sizeof(struct alumno));

    strcpy(pal->nombre, "Luciano");
    strcpy((*pal).nombre, "Luciano");

    return EXIT_SUCCESS;
}


