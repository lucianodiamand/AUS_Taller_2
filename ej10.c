
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int cont = 0;
  do {
    char* pc = (char*) malloc(2000000 * sizeof(char));
    if (pc == NULL) {
      printf("No hay memoria\n");
      return EXIT_FAILURE;
    }
    printf("%d\n", ++cont);
  
  }while (1);


  return EXIT_SUCCESS;
}

