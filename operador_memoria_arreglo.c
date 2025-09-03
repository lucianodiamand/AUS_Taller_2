
#include <stdio.h>

int main() {
  int arr[10];

  int *p1 = arr;
  int (*p2)[10] = &arr;

  printf("%d\n", sizeof(p1));
  printf("%d\n", *(p1 + 3)); // arr[3]

  printf("%d\n", sizeof(p2));
  printf("%p\n", (void*)(p2 + 0)); // 10 * sizeof(int)
  printf("%p\n", (void*)(p2 + 1)); // 10 * sizeof(int)
}
