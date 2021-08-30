// Pasaje por referencia
#include <stdio.h>
#include <stdlib.h>

// Prototipo
void intercambia(int*, int*);

int main (void)
{

  int a = 1;
  int b = 2;
  printf("a: %d, b: %d\n", a, b);

  intercambia(&a, &b);

  printf("a: %d, b: %d\n", a, b);
  return EXIT_SUCCESS;
}

void intercambia(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

