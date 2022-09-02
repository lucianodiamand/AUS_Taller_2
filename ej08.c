
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char* pc = (char*) malloc(200 * sizeof(char));
  // char* pc = (char*) calloc(200, sizeof(char));

  for (int i = 0; i < 200; i++) {
    printf("%d ", *(pc + i));
  }

  return EXIT_SUCCESS;
}

