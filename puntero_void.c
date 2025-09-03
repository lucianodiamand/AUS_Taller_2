
#include <stdio.h>

int main () {

    void *pvoid = NULL;
    printf("%p\n", (int*)pvoid);
    pvoid++;
    printf("%p\n", (int*)pvoid);

    return 0;
}
