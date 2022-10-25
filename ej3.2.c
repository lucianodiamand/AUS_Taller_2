#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct tiempo {
  int anio, mes, dia, hora, minuto, segundo;
} Tiempo;

typedef struct {
  char *nombre;
  Tiempo ultima_mod;
} Archivo;

int compara_tiempos(Tiempo *t1, Tiempo *t2) {
    if (t1->anio < t2->anio) {
        return 1;
    }
    if (t1->anio > t2->anio) {
        return -1;
    }
    if (t1->mes < t2->mes) {
        return 1;
    }
    if (t1->mes > t2->mes) {
        return -1;
    }
    if (t1->dia < t2->dia) {
        return 1;
    }
    if (t1->dia > t2->dia) {
        return -1;
    }
    // ...
    return 0;
}

int main(void) {
   int n = 10;
 
   Tiempo t1;
   Tiempo t2;

   compara_tiempos(&t1, &t2);

   Archivo lista[n];
   // Archivo *lista = (Archivo*) malloc(sizeof(Archivo) * n);

   for (int i = 0; i < n; i++) {
       printf("Ingrese el dato %d:", i + 1);
       char *nombre = (char*) malloc(sizeof(char) * 10);
       fgets(nombre, 10, stdin);

       lista[i].nombre = nombre;

       scanf("%d", &(lista[i].ultima_mod.anio));
       lista[i].ultima_mod.mes = 9;
       lista[i].ultima_mod.dia = 26;
       lista[i].ultima_mod.hora = 21;
       lista[i].ultima_mod.minuto = 33;
       lista[i].ultima_mod.segundo = 0;
   }

   return EXIT_SUCCESS;
}

