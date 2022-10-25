
#include <stdio.h>
#include <stdlib.h>

int calcY(int y, int tam);
int determinante_Matriz(int tam, int **matriz);

int main() {

    int tam = 2; // Falta pedir por teclado
    
    int **matriz = (int**) malloc(tam * sizeof(int*));
    if (matriz == NULL) {
        printf("No se pudo reservar memoria\n");
	return EXIT_FAILURE;
    }

    for (int i = 0; i < tam; i++) {
        *(matriz + i) = (int*) malloc(tam * sizeof(int));
        if (matriz == NULL) {
            printf("No se pudo reservar memoria\n");
            return EXIT_FAILURE;
        }
    }

    int cont = 1;
    // Pedir por teclado los valores
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
	    if (i == j) {
                matriz[i][j] = 1;
	    } else {
		matriz[i][j] = 0;
	    }
        }
    }

    int det = determinante_Matriz(tam, matriz);

    printf("El determinante es %d\n", det);

    for (int i = 0; i < tam; i++) {
        free(*(matriz + i));
    }
    free(matriz);

    return EXIT_SUCCESS;
}

int determinante_Matriz(int tam, int **matriz) {
    int x = 0;
    int y = 0;

    int det = 0;
    int detp = 1;

    for (int k = 0; k < tam; k++) {
       for (int i = 0; i < tam; i++) {
           //detp *= matriz[x++][calcY(y++, tam)];
	   printf("(%d,%d) ", (x++ + 1), (calcY(y++, tam) + 1));
       }
       x = 0;
       y--;
       det += detp;
       detp = 1;
    }
    x = tam - 1;
    y = 0;
    for (int k = 0; k < tam; k++) {
       for (int i = 0; i < tam; i++) {
           //detp *= matriz[x--][calcY(y++, tam)];
	   printf("(%d,%d) ", (x-- + 1), (calcY(y++, tam) + 1));
       }
       x = tam - 1;
       y--;
       det -= detp;
       detp = 1;
    }
    return det;
}

int calcY(int val, int tam) {
    return val % tam;
}

