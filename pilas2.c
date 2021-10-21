
#include <stdio.h>
#include <stdlib.h>

typedef struct _nodo {
    int dato;
    struct _nodo *prev;
} nodo;

//typedef nodo* pila;

void push(nodo** p, nodo* nuevo); 
size_t size(nodo* p);

int main(void)
{
   nodo* p = NULL;
   
   printf("Cant: %ld\n", size(p));

   nodo* nuevo = (nodo*) malloc(sizeof(nodo));
   nuevo->dato = 1;
   nuevo->prev = NULL;

   push(&p, nuevo);

   printf("Cant: %ld\n", size(p));
   return 0;
}

void push(nodo** p, nodo* nuevo) {
   if (*p != NULL) {
     nuevo->prev = *p;
   }
   *p = nuevo;
}

size_t size(nodo* p) {
   int cant = 0;
   while (p) {
     cant++;
     p = p->prev;
   }
   return cant;
}

