
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char* message = "Hola Mundo!";
  char* pc = (char*) malloc(20 * sizeof(char));

  for (int i = 0; i < strlen(message); i++) {
    *(pc + i) = *(message + i);
  }

  printf("%s\n", pc);
  printf("%p\n", pc);
  free(pc);
  pc = NULL;  // deadcode
 
  for (int i = 0; i < strlen(message); i++) {
    *(pc + i) = *(message + i);
  }

  printf("Uso: %c\n", *pc);
  printf("%p\n", pc);

  return EXIT_SUCCESS;
}

