
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char *message = malloc(300 * sizeof(char));
    fgets(message, 300, stdin);

    printf("%s\n", message);

    return EXIT_SUCCESS;
}
