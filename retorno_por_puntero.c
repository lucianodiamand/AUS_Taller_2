// Pasaje por referencia
#include <stdio.h>
#include <stdlib.h>

// Prototipo
void intercambia(int*);

int main (void)
{

  int c;
  intercambia(&c);

  int a = 1;
  int b = 2; 
  int d = 3;

  printf("c: %d\n", c);
  return EXIT_SUCCESS;
}

void intercambia(int *c) {
  *c = 10;

  {
    int j = 0;
    printf("%d", j);
  }

}

