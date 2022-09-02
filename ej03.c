#include <stdio.h>

int main() {

   int arr[] = { 1, 2, 3, 4, 5 };

   printf("arr: %p\n", arr);
   printf("arr: %p\n", &arr);
   printf("arr: %p\n", &arr[0]);

   int *pi = arr;
   for (int i = 0; i < 5; i++) {
       printf("arr[%d]: %d\n", i, arr[i]);
   }

   for (int i = 0; i < 5; i++) {
       printf("*(pi + %d): %d\n", i, *(pi + i));
   }

   printf("%p %p\n", arr, pi);
   return 0;
}
