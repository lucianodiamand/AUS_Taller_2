
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char* pc = (char*) malloc(20 * sizeof(char));
  if (pc == NULL) {
    printf("No hay memoria\n");
    return EXIT_FAILURE;
  }
  for (int i = 0; i < 20; i++) {
    printf("%d ", *(pc + i));
  }

  pc = realloc(pc, 40 * sizeof(char));
  if (pc == NULL) {
    printf("No hay memoria\n"); 
    return EXIT_FAILURE;
  } 
  // ....

  free(pc);

  return EXIT_SUCCESS;
}

