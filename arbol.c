
#include <stdio.h>
#include <stdlib.h>

typedef struct _nodo {
    int dato;
    struct _nodo *izq;
    struct _nodo *der;
} nodo;

void inorder(nodo *n);
void preorder(nodo *n);
void postorder(nodo *n);
void agregarNodo(nodo **n, int value);
void agregar(nodo **n, nodo *tmp);

void inorder(nodo *n) {
    if (n->izq) {
        inorder(n->izq);
    }
    printf("%d\n", n->dato);
    if (n->der) {
        inorder(n->der);
    }
}

void preorder(nodo *n) {
    printf("%d\n", n->dato);
    if (n->izq) {
        preorder(n->izq); 
    }
    if (n->der) {
        preorder(n->der);
    }
}

void postorder(nodo *n) {
    if (n->izq) {
        postorder(n->izq);
    }
    if (n->der) {
        postorder(n->der);
    }
    printf("%d\n", n->dato);
}

void agregarNodo(nodo **n, int value) {
    nodo *tmp = (nodo*) malloc(sizeof(nodo));
    tmp->dato = value;
    tmp->izq = NULL;
    tmp->der = NULL;

    agregar(n, tmp);
}

void agregar(nodo **n, nodo *tmp) {
    if (*n == NULL) {
        *n = tmp;
	return;
    }
    if ((*n)->dato < tmp->dato) {
	// voy  a la derecha
	agregar(&((*n)->der), tmp);
    } else if ((*n)->dato > tmp->dato) {
	// voy a la rama izquierda
	agregar(&((*n)->izq), tmp);
    } else {
	free(tmp);
    }
}

int main(void) {
   nodo *arbol = NULL;
   agregarNodo(&arbol, 12);
   agregarNodo(&arbol, 20);
   agregarNodo(&arbol, 7);
   inorder(arbol);
   return EXIT_SUCCESS;
}

