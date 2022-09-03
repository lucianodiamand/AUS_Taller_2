
#include <stdio.h>
#include <stdlib.h>

int main() {
 
  int *arr = (int*) malloc(5 * sizeof(int));

  if (arr == NULL) {
    printf("No fue posible almacenar la cantidad requerida de memoria\n");
    return EXIT_FAILURE;
  }

  for (int i = 0; i < 5; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d\n", *(arr + i));
  }

  free(arr);
  return EXIT_SUCCESS;
}

// arr[i] === *(arr + i)
