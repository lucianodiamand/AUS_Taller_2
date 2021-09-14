#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
  int arr[] = { 1, 2, 3 };
  int *pv;
  pv = arr;

  // no funciona porque es lvalue
  //arr = pv;
  
  for (int i = 0; i < 3; i++) {
      printf("%d\n", arr[i]);
      printf("%d\n", *(pv + i));
  }

  int matriz[2][3] = { { 1, 2, 3 }, { 4, 5, 6 }}; 

  for (int i = 0; i < 2; i++) {
      printf("%p\n", *(matriz + i));
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\n", matriz[i][j]);
    }
  }

  int *arr2 = (int*) malloc(3 * sizeof(int));
  for (int i = 0; i < 3; i++) {
      arr2[i] = i;
  }

  int *arr3[5];
  for (int i = 0; i < 5; i++) {
      arr3[i] = (int*) malloc(sizeof(int));
      *arr3[i] = i;
      // arr3[i] === *(arr3 + i)
      **(arr3 + i) = i;
  }

  char *message[5] = { "Hola", "Chau", "Pepe", "Sopa", "iupi" };

  int **matriz2 = (int**) malloc(2 * sizeof(int*));
  for (int i = 0; i < 2; i++) {
      matriz2[i] = (int*) malloc(3 * sizeof(int));
  }

  int **matriz3 = (int**) malloc(2 * sizeof(int*));
  matriz3[0] = (int*) malloc(3 * sizeof(int));
  matriz3[1] = (int*) malloc(6 * sizeof(int));
  
  void **matriz4 = (void**) malloc(2 * sizeof(void*));
  matriz3[0] = (void*) malloc(3 * sizeof(int));
  matriz3[1] = (void*) malloc(6 * sizeof(char));

  return 0;
}
