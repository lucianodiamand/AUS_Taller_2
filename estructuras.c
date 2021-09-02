#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct _persona {
  char nombre[20];
  char apellido[20];
  int edad;
};

struct _coordenada {
  double latitud;
  double longitud;
} rosario; // Defino una variable global que representa a Rosario.

// typedef int luciano;

typedef struct _sensor {
  struct _coordenada coordenada;
  double temperatura;
} sensor;

struct {
  sensor sensor;
  double distancia;
} radar;

typedef struct _receta  {
  char ingrediente[20];
  struct _receta *base;
} receta;

int main(void)
{
  receta *huevoDuro = (receta*) malloc(sizeof(receta));
  strcpy(huevoDuro->ingrediente, "huevo");

  receta r;
  strcpy(r.ingrediente, "harina");
  
  receta base;
  strcpy(base.ingrediente, "agua");
  base.base = NULL;
  
  r.base = &base;

  printf("Ingrediente: %s\n", r.base->ingrediente);
  //luciano var1 = 10;
  struct _sensor sensor1;
  sensor sensor2;
  //radar r;
  radar.sensor.coordenada.latitud = 1.2;

  struct _persona p1; // crea un objeto y reserva memoria de stack
  strcpy(p1.nombre, "Luciano");
  strcpy(p1.apellido, "Diamand");
  p1.edad = 46;

  printf("Nombre: %s\n", p1.nombre);

  struct _persona p2;
  strcpy(p2.nombre, "Pepe");
  strcpy(p2.apellido, "Lu");
  p2.edad = 46;

  // aca!!
  struct _persona *personas;

  return EXIT_SUCCESS;
}

