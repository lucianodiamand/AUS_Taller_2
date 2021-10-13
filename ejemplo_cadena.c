#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   char c;
   char *cadena;
} char_string;

int cantidad(char_string*);
int* ocurrencias(char_string*);

int main(void)
{
   char_string *cs1;
   cs1 = (char_string*) malloc(sizeof(char_string) * 1);

   cs1->c = 'a';
   cs1->cadena = "hola mundo que tal!";
   
   int canti = cantidad(cs1);
   printf("%d\n", canti);

   int* arr = ocurrencias(cs1);
   if (arr == NULL) {
      printf("No se pudo reservar memoria");
      return -1;
   } 

   for (int i = 0; i < canti; i++) {
     printf("%d\n", *(arr + i)); 
   }

   free(arr);
   free(cs1);

   return 0;
}

int cantidad(char_string* cs) {

  int contador = 0;
  char *cadena = cs->cadena;

  while(*cadena != '\0') {
     if (*cadena == cs->c) {
         contador++;
     }
     cadena++;
  } 

  return contador;
}

int* ocurrencias(char_string* cs) {
  int cant = cantidad(cs);
  int* arr = (int*) malloc(sizeof(int) * cant);
  if (arr == NULL) {
     return NULL; 
  }

  int contador = 0;
  char *cadena = cs->cadena;
  while (*cadena != '\0') {
    if (*cadena == cs->c) {
      *(arr + contador) = cadena - cs->cadena;
      contador++;
    } 
    cadena++;
  }

  return arr;
}

