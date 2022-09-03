
#include <stdio.h>
#include <stdlib.h>

int main() {
//  int bi  [2]  [3];
//          fil  col
  size_t fil = 2;
  size_t col = 3;

  int **bi = (int**) malloc(fil * sizeof(int*));
  if (bi == NULL) {
    printf("No se pudo reservar memoria\n");
    return EXIT_FAILURE;
  }
  for (int i = 0; i < fil; i++) {
    *(bi + i) = (int*) malloc(col * sizeof(int));
    if (*(bi + i) == NULL) {
      printf("No se pudo reservar memoria\n");
      return EXIT_FAILURE;
    }
  }

  int cont = 1;
  for (int i = 0; i < fil; i++) {
    for (int k = 0; k < col; k++) {
      *(*(bi + i) + k) = cont++;
    }
  }

  for (int i = 0; i < fil; i++) {
    for (int k = 0; k < col; k++) {
      printf("%d\n", bi[i][k]);
    }
  }

  for (int i = 0; i < fil; i++) {
    free(*(bi + i));
  }
  free(bi);
  bi = NULL;

  return EXIT_SUCCESS;
}

// arr[i][j] === *(*(arr + i) + j)

