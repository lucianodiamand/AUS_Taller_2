
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
    //-> tipo <-/
    alumno al1;
    scanf("%s", al1.nombre);

    strcpy(al1.nombre, "Luciano");
    strcpy(al1.apellido, "Diamand");
    al1.edad = 47;

    alumno al2;
    strcpy(al2.nombre, "Mariana");
    //...
    
    alumno curso[20];

    return EXIT_SUCCESS;
}


