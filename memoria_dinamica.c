
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *pc = malloc(10 * sizeof(char));
    fgets(pc, 10, stdin);
    printf("%s\n", pc);
    int *pi = malloc(10 * sizeof(int));
    *pi = 500;
    *(pi + 1) = 30;
    printf("%d\n", *pi);

    free(pi);
    free(pc);
    return 0;
}
