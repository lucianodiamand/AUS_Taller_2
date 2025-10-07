#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char *nombre;
    char *apellido;
} Persona;

Persona * createPersona(char*, char*);

int main (void) {
    Persona *p = createPersona("Luciano", "Diamand");      
    
    printf("%s, %s\n", p->nombre, p->apellido);
    free(p);
}

Persona * createPersona(char *nombre, char *apellido) {
    Persona *tmp = (Persona*) malloc(sizeof(Persona));
    tmp->nombre = nombre;
    tmp->apellido = apellido;

    return tmp;
}

