
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
  strcpy(car1.patente, "AA345IT");
  strcpy(car1.marca, "Ford");
  strcpy(car1.color, "Blanco");
  car1.anio = 2020;

  f = fopen("auto.dat", "wb");

  fwrite(&car1, sizeof(struct car), 1, f);

  fclose(f);
  return 0;
}

