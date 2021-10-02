
#include <stdio.h>

int main(void)
{
  FILE *f;
  int v[6] = { 5, 2, 10, 1, 9, 45 };
  int elem_escritos;
  int num = 25;
  f= fopen("datos.dat", "wb");

  /*para escribir los últimos 4 elementos de v[] en f*/
  elem_escritos = fwrite(&v[2], sizeof(int), 4, f);

  /*Para escribir el primer elemento de v[], sirve cualquiera*/
  fwrite(v, sizeof(int), 1, f);
  fwrite(&v[0], sizeof(int), 1, f);
  /*Para escribir un entero sirve cualquiera*/
  fwrite(&num, sizeof(int), 1, f);
  fwrite(&num, sizeof(num), 1, f);

  fclose(f);
   return 0;
}

