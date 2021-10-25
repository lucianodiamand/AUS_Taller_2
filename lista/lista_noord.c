
#include <stdio.h>
#include "lista.h"

void agregar(ciclista** cima, ciclista* nuevo) {
  ciclista* p = *cima;
   if (*cima == NULL) {
      *cima = nuevo;
      return;
   }
   while(p->sig) {
      p = p->sig;
   }
   p->sig = nuevo;
}

