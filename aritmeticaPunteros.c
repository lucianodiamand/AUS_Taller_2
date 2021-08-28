#include <stdio.h>

int main(void)
{

  int a = 5;

  int *pa = &a;

  *pa = 100;

  printf("%p\n", pa);

  pa = pa + 1;

  printf("%p\n", pa);

  char c = 'A';

  char *pc = &c;

  printf("%p\n", pc);

  // Aritmetica de punteros
  pc = pc + 1;
  pc -= 1;

  printf("%p\n", pc);

  int arr[] = { 1, 3, 4, 5, 6 };
  printf("%p\n", &arr);
  printf("%p\n", &arr[2]);

  int *parr = arr;
  // arr = parr;
  printf("%p\n", (parr + 0));
  printf("%p\n", (parr + 2));

  for (int i = 0; i < 7; i++) {
    printf("%d\n", *(parr + i));
  }



  return 0;
}
