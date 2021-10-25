
#include <stdio.h>
#include "lista.h"

void listar(ciclista* cima) {
   while (cima) {
      printf("%d: %s\t\t%d\n", cima->num, cima->nombre, cima->tiempo);
      cima = cima->sig;
   }

}

