
#include <stdio.h>
#include <stdlib.h>

int main() {
//  int bi  [2]  [3];
//          fil  col
  size_t fil = 2;
  // size_t col = 3;

  int **bi = (int**) malloc(fil * sizeof(int*));
  if (bi == NULL) {
    printf("No se pudo reservar memoria\n");
    return EXIT_FAILURE;
  }
  *(bi + 0) = (int*) malloc(2 * sizeof(int));

  if (*(bi + 0) == NULL) {
    printf("No se pudo reservar memoria\n");
    return EXIT_FAILURE;
  }
  *(bi + 1) = (int*) malloc(4 * sizeof(int));

  if (*(bi + 1) == NULL) {
    printf("No se pudo reservar memoria\n");
    return EXIT_FAILURE;
  }

  // ... los uso

  free(*(bi + 1));
  free(*(bi + 0));
  free(bi);
  bi = NULL;

  return EXIT_SUCCESS;
}

// arr[i][j] === *(*(arr + i) + j)

