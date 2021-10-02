
#include <stdio.h>
#include <string.h>

struct car {
  char patente[8];
  char marca[20];
  char color[15];
  int anio;
};

int main(void)
{
  FILE *f;

  struct car car1;

  f = fopen("auto.dat", "rb");

  fread(&car1, sizeof(struct car), 1, f);

  printf("%s\n", car1.patente);
  fclose(f);
  return 0;
}

