
#include <stdio.h>
#include <stdlib.h>

#define clear_buffer while((a = getc(stdin)) != '\n' && a != EOF);

int main(void)
{
   char* frase = (char*) malloc(sizeof(char) * 100);
   scanf("%s", frase);

   printf("%s", frase);

   clear_buffer;

   scanf("%s", frase);

   printf("%s", frase);

   scanf("%s", frase);

   printf("%s", frase);

   return 0;
}
