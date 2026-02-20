#include <stdio.h>

int main()
{
  int numero = 1;

  printf("Mostrando secuencia de cuadrados de números: ");

  while (numero <= 10)
  {
    printf("%d", numero * numero);
    if (numero < 10)
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