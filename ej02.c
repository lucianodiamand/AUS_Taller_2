#include <stdio.h>

int main() {

   char arr[] = { '1', '2', '3', '4', '5' };

   printf("arr: %p\n", arr);
   printf("arr: %p\n", &arr);
   printf("arr: %p\n", &arr[0]);

   char *pi;
   // pi = NULL;
   pi = arr + 1; // aritmetica de punteros
   printf("arr + 1: %p\n", pi);
   printf("valor arr + 1: %c\n", *pi);

   // arr = arr + 1; // NC
   return 0;
}
