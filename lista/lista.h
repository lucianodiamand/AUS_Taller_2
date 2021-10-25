
typedef struct _ciclista {
   int num;
   char nombre[80]; // info del tipo
   int tiempo;
   struct _ciclista* sig;  //enlace a la propia estructura
} ciclista;

/* Lista enlazada no ordenada */
void agregar(ciclista** top, ciclista* nuevo);
void listar(ciclista* top);

