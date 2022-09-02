
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("%ld\n", sizeof(int));
  void* pv = malloc(20 * sizeof(char));

  char c = 'A';
  int i = 1 + (int) c;
  printf("%c\n", i);

  double d = 1.5;
  int n = (int) d;
  printf("%d\n", n);
  
  int x = 8;
  int* px = &x;

  void* vx = px;
  
  int* px2 = vx;
  printf("%d\n", *px2);

  return EXIT_SUCCESS;
}

