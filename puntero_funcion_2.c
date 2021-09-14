#include <stdio.h>

void suma(int a, int b) {
   printf("Suma: %d + %d = %d\n", a, b, a + b);
}

void resta(int a, int b) {
   printf("Resta: %d - %d = %d\n", a, b, a - b);
}

void noop(int a, int b) {
   printf("Operación invalida\n");
}

int main(void)
{
  void (*operaciones[]) (int, int) = { suma, noop, resta };

  int a, b;
  char op;
  
  scanf("%d %c %d", &a, &op, &b);
  
  // + -> 43, - -> 45
  (*operaciones[op - 43])(a, b);

  return 0;
}
