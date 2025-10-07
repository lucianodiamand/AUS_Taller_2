
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int **arr;

    arr = (int**) malloc(2 * sizeof(int*));

    *(arr + 0) = (int*) malloc(3 * sizeof(int));
    *(arr + 1) = (int*) malloc(6 * sizeof(int));

    int fila = 1;
    int columna = 2;

    *(*(arr + fila) + columna) = 10;

    printf("%d\n", *(*(arr + fila) + columna));
    // uso la matriz!
    
    free(*(arr + 1));
    free(*(arr + 0));

    free(arr);
    return 0;
}
