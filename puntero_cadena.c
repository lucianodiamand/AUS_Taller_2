
#include <stdio.h>

int main (){
    int i = 0;
    const char *lunes = "Lunes";

    //lunes[2] = 'e';
    printf("%p\n", lunes);
    printf("%p\n", &i);

    return 0;
}
