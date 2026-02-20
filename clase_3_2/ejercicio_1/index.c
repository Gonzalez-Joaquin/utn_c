#include <stdio.h>

int main()
{
  int numero = 0;

  printf("Mostrando secuencia de números: ");

  while (numero < 10)
  {
    printf("%d", numero + 1);
    if (numero < 9)
    {
      printf(", ");
    }
    else
    {
      printf("\n");
    }
    numero++;
  }

  return 0;
}