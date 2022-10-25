
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(void) {
    int entero;
    char *message = malloc(300 * sizeof(char));
    if (message == NULL) {
        perror();
    }
    fgets(message, 300, stdin);

    printf("Hola Que tal\n");
    scanf("%d", &entero);
    perror(errno);

    return EXIT_SUCCESS;
}
