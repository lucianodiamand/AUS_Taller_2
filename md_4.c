
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *pc = (char*) calloc(20, sizeof(char));

    free(pc);
    return 0;
}

