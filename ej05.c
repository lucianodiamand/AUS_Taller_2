#include <stdio.h>

int main() {

   int arr[][3] = { 1, 2, 3, 4, 5, 6 };

   printf("%ld\n", sizeof(arr));
   printf("%p\n", arr);
   printf("%p\n", &arr[1][0]);

   printf("%p\n", &arr[0]);
   printf("%p\n", &arr[1]);

   return 0;
}
