#include <stdio.h>

int main() {

   int arr[] = { 1, 2, 3, 4, 5 };

   int *pi = arr;
   int *pj = &arr[4];

   printf("%ld\n", pj - pi);
   printf("%p %p\n", pj, pi);

   return 0;
}
