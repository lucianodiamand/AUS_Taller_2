
#include <stdio.h>

int main(void)
{
  FILE *f;
  int v[6], elem_leidos, num = 25;
  f = fopen("datos.dat", "r");
  /*para leer 3 elementos y guardarlos en v[], desde la tercera
  posición*/
  elem_leidos= fread(&v[2], sizeof(int), 3, f);

  for (int i = 2; i < 5; i++) {
    printf("%d\n", v[i]); 
  }

  fclose(f);
  return 0;
}
