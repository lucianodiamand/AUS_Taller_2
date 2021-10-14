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
   // ------- Una forma usando objetos del tipo de la estructura ------
   char_string cs2;
   cs2.c = 'o';
   cs2.cadena = "Hola mundo";

   // ------- Una forma usando punteros a estructura ------
   char_string *cs1;
   cs1 = (char_string*) malloc(sizeof(char_string) * 1);

   cs1->c = 'a';
   printf("Ingrese la frase\n");
   char *frase = (char*) malloc(sizeof(char) * 100);
   fgets(frase, 100, stdin);

   cs1->cadena = frase;
   // -----------------------------------------------------
   
   int canti = cantidad(cs1);
   printf("Cantidad de ocurrencias de %c: %d\n", cs1->c, canti);

   int* arr = ocurrencias(cs1);
   if (arr == NULL) {
      printf("No se pudo reservar memoria");
      return -1;
   } 

   for (int i = 0; i < canti; i++) {
     printf("%d\n", *(arr + i)); 
   }

   free(arr);
   free(frase);
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
  //int arr[cant]; // <--- NO no no!

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

