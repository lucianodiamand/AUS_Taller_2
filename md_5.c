
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) {
    char *pc = (char*) malloc(20 * sizeof(char));
    if (!pc) {
        printf("No hay mas memoria\n");
	return -1;
    }
    pc = (char*) realloc(pc, 40 * sizeof(char));

    malloc_stats();
    free(pc);
    return 0;
}

