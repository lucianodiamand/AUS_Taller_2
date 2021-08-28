
int j = 0;

int main(void)
{
  char *s = "Hola mundo\n"; // no va al stack / constantes
  printf("%s", s);
  int i = 0; // stack
  j = 5;
}


void otraFuncion() {
  j = 6;
}

