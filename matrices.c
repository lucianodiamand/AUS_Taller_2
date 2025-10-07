
#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 4

int main(void) {

    int **arr;

    arr = (int**) malloc(FILAS * sizeof(int*));

    for (int i = 0; i < FILAS; i++) {
        *(arr + i) = (int*) malloc(COLUMNAS * sizeof(int));
    }

    int fila = 1;
    int columna = 2;

    *(*(arr + fila) + columna) = 10;

    printf("%d\n", *(*(arr + fila) + columna));
    // uso la matriz!
    
    for (int i = 0; i < FILAS; i++) {
        free(*(arr + i));	
    } 

    free(arr);
    return 0;
}
