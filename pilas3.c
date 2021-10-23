
#include <stdio.h>
#include <stdlib.h>

typedef struct _nodo {
    int dato;
    struct _nodo *prev;
} nodo;

typedef nodo* stack;

void push(stack* top, nodo* nuevo);
nodo* pop(stack* top);
void clear(stack* top);

int main(void)
{

  stack s = NULL;

  nodo* nuevo = (nodo*) malloc(sizeof(nodo));
  nuevo->dato = 10;
  nuevo->prev = NULL;

  push(&s, nuevo);

  printf("%p\n", s);

  nuevo = (nodo*) malloc(sizeof(nodo));
  nuevo->dato = 20;
  nuevo->prev = NULL;

  push(&s, nuevo);

//  printf("%p\n", s);

//  nodo* recup = pop(&s);

  clear(&s);

  printf("%p\n", s);

  return EXIT_SUCCESS;
}

void push(stack* top, nodo* nuevo) {
  if (*top != NULL) {
     nuevo->prev = *top;
  }
  *top = nuevo; 
}

nodo* pop(stack* top) {
  nodo* tmp = *top;
  *top = tmp->prev;
  return tmp;
}

void clear(stack* top) {
  while(*top) {
     nodo* tmp = pop(top); 
     free(tmp);
  }
}

