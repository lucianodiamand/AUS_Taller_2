
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float latitud;
    float longitud;
} ubicacion;

typedef struct Persona {
    // Los datos que representan a un alumno
    char nombre[20];
    char apellido[20];
    int edad;
    ubicacion pos;
    struct Persona *amigo;
} persona;

int main(void) {
    persona *pal;

    pal = (persona*) malloc(sizeof(persona));

    strcpy(pal->nombre, "Luciano");
    // strcpy((*pal).nombre, "Luciano");

    persona *pal2 = (persona*) malloc(sizeof(persona));

    strcpy(pal2->nombre, "Sofia");

    pal->amigo = pal2; 

    return EXIT_SUCCESS;
}


