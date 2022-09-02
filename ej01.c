#include <stdio.h>

int main() {

   int mivar = 99;
   printf("mivar: %p\n", &mivar);
   int arr[] = { 1, 2, 3, 4, 5 };

   printf("%ld\n", sizeof(arr)/sizeof(int));

   printf("arr: %p\n", arr);
   printf("arr: %p\n", &arr);
   printf("arr: %p\n", &arr[0]);

   int *pi;
   // pi = NULL;
   pi = arr + 1; // aritmetica de punteros
   printf("arr + 1: %p\n", pi);
   printf("valor arr + 1: %d\n", *pi);

   pi = arr - 1; // aritmetica de punteros
   printf("arr - 1: %p\n", pi);
   printf("valor arr - 1: %d\n", *pi);
   
   size_t cant = sizeof(int);
   printf("%ld\n", cant);
   // arr = arr + 1; // NC
   return 0;
}
