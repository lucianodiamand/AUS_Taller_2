
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    FILE* csvin;
    FILE* csvout;

    if ((csvin = fopen("ejemplo.csv", "r")) == NULL) {
       printf("Error al abrir el archivo de lectura\n");
       return 1; 
    }
    if ((csvout = fopen("salida.txt", "w")) == NULL) {
       printf("Error al abrir el archivo de escritura\n");
       return 1; 
    }
    int id;
    char *mensaje = (char*) malloc(sizeof(char) * 100);
    char *nombre = (char*) malloc(sizeof(char) * 100);
    if (fscanf(csvin, "%d %s %s", &id, mensaje, nombre) != 3) {
       printf("Algo se rompio\n");
       return 1;
    }
    fprintf(csvout, "%d> %s: %s\n", id, nombre, mensaje);

    free(nombre);
    free(mensaje);
    return 0;
}

