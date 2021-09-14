#include<stdio.h>

typedef int (*funciondinamica)(int);

int mifuncion(int a) {
    return a;
}

void ejecutaFuncion(funciondinamica fd) {
    printf("%d\n", fd(5));
}

int main(void)
{
    funciondinamica f1; 
    f1 = mifuncion;

    // invocacion dinamica
    ejecutaFuncion(f1);

    // invocacion estatica
    printf("%d\n", mifuncion(5));
    return 0;
}

