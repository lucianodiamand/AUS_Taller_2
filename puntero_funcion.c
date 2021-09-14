#include<stdio.h>

int mifuncion(int a) {
    return a;
}

int main(void)
{
    int a;
    int *pta;
    pta = &a;

    int (*f1)(int);
    f1 = mifuncion;

    // invocacion dinamica
    printf("%d\n", (*f1)(5));

    // invocacion estatica
    printf("%d\n", mifuncion(5));
    return 0;
}

