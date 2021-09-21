
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strDer(char *destino, const char *origen); // Saca blancos Der.

int main(void)
{
    char *message = "Hola Mundo";
    char *tmp = message;

    char arr[] = { 'H', 'o', 'l', 'a', ' ', 'M', 'u', 'n', 'd', 'o', '\0' };
    
    printf("%s\n", message);
    printf("%s\n", arr);

    for (int i = 0; i < 10; i++) {
        printf("%c", *message);
        message++;
    }
    printf("\n");
    message = tmp;

    while (*message != '\0') {
        printf("%c", *message);
        message++;
    }
    printf("\n");
    message = tmp;

    char *s = "AAAAAAAAAAA       ";
    char *d = (char*) malloc(sizeof(char) * strlen(s) + 1);
    strDer(d, s);

    printf("%s(%ld)\n", s, strlen(s));
    printf("%s(%ld)\n", d, strlen(d));
    return 0;
}

void strDer(char *destino, const char *origen) {
    // "Esta cadena     "
    size_t largo = strlen(origen);
    const char *tmp = origen;
    tmp = tmp + largo - 1;
    while (*tmp == ' ') {
        tmp--;
    }
    size_t cant = tmp - origen + 1;
    strncpy(destino, origen, cant);
    *(destino + cant + 1) = '\0';
}

