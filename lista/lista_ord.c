
#include <stdio.h>
#include "lista.h"

void agregar(ciclista** cima, ciclista* nuevo) {
  ciclista* actual = *cima;
  ciclista* anterior = NULL;
  while (actual != NULL && actual->tiempo < nuevo->tiempo) {
      anterior = actual;
      actual = actual->sig;
  }
  if (anterior == NULL) {
      *cima = nuevo;
  } else {
      anterior->sig = nuevo;
  }   
  nuevo->sig = actual;
}

