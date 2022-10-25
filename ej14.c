
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
    // Los datos que representan a un alumno
    char nombre[20];
    char apellido[20];
    int edad;
    int notas[3];
} sandra;

int main(void) {
    //-> tipo <-/
    struct Alumno al1;
    strcpy(al1.nombre, "Luciano");
    strcpy(al1.apellido, "Diamand");
    al1.edad = 47;

    struct Alumno al2;
    strcpy(al2.nombre, "Mariana");
    //...
    
    sandra.edad = 20;
    return EXIT_SUCCESS;
}


