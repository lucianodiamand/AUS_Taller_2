#include <stdio.h>

int main (void)
{

  // Un puntero es un tipo de variable
  // donde almaceno un direccion de memoria
  int i = 5;
  int *pi; // defini un puntero con el nombre pi 
           // sin inicializar
  pi = &i; // direccion de memoria de i 
  // int *p2 = 100; // no puedo asignarle un valor entero

  char a = 'A';
  char *pa = &a;

  char *message = "Hola!\n";
  char *message2 = "Hola!\n";
  char *message3 = "Chau!\n"; // se le agrega al final \0

  printf("%s\n", message3); // esto muesrta hasta encontrar el \0

  printf("&Hola!: %p\n", message);
  printf("&Hola!: %p\n", message2);
  printf("&Chau!: %p\n", message3);

  printf("i: %d\n", i);
  printf("i (pi): %d\n", *pi);
  printf("&i: %p\n", &i);
  printf("&i: %p\n", pi);
  printf("&pi: %p\n", &pi);
  
  printf("&a: %p\n", &a);
  printf("&pa: %p\n", &pa);
  
  char *p3 = NULL; 
  printf("%d\n", (int)p3);

  return 0;
}
