#define PI 3.1415

int main(void)
{

  int i = 5;
  double p = i * PI;

  int j = 0;
  const int *pi = &j;
  pi = &i;
  
  //*pi = 6;
  
  int * const pp = &i;
  *pp = 9;
  pp = &j;

  const int * const po = &i;

  return 0;

}
