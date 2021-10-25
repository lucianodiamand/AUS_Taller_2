
#include <stdlib.h>
#include <string.h>
#include "lista.h"

/* Helper */
void crear(ciclista** c, int num, int tiempo, char* nombre);

int main (void) 
{
   ciclista* cima = NULL;
   ciclista* c1 = NULL;
   crear(&c1, 1, 100, "Luciano");

   agregar(&cima, c1);

   ciclista* c2 = NULL;
   crear(&c2, 2, 80, "Marina");

   agregar(&cima, c2);

   ciclista* c3 = NULL;
   crear(&c3, 3, 60, "Juan");

   agregar(&cima, c3);

   listar(cima);

   return EXIT_SUCCESS;
}

void crear(ciclista** c, int num, int tiempo, char* nombre) {
   *c = (ciclista*) malloc(sizeof(ciclista));
   (*c)->num = num;
   (*c)->tiempo = tiempo;
   (*c)->sig = NULL;
   strcpy((*c)->nombre, nombre);
}

