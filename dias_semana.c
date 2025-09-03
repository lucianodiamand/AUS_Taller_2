
#include<stdio.h>

int main() {
  char dias[][] = { "Lunes", "Martes", "Miercoles",
      "Jueves", "Viernes", "Sabado", "Domingo" };

  for (int i = 0; i < 7; i++) {
    printf("%s\n", dias[i]);
  }

  return 0;
}
