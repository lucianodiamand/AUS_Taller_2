
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *pc = (char*) malloc(100 * sizeof(char));
  printf("%p\n", pc);
  char *tmp = pc;
  if (pc == NULL) {
    perror("Error\n");
    return EXIT_FAILURE;
  }

  for (int i = 0; i < 100; i++) {
    //*tmp = i;
    printf("%d: %c, ", i, *tmp);
    tmp = tmp + i;
  } 

  free(pc);
  pc = NULL;

  pc = (char*) calloc(100, sizeof(char));
  if (pc == NULL) {
    perror("Error\n");
    return EXIT_FAILURE;
  }

  for (int i = 0; i < 100; i++) {
    printf("%d: %c, ", i, *(pc + i));
  } 

  char *pc2 = (char*) realloc(pc, 200 * sizeof(char));

  printf("Sizeof(200): %ld\n", sizeof(200));
  
  free(pc2);
  
  char *pc3 = (char*) malloc(sizeof("Hola"));

  return EXIT_SUCCESS;
}
