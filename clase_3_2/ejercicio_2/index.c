#include <stdio.h>

int main()
{
  int numero = 1;

  printf("Mostrando secuencia de números impares: ");

  while (numero <= 20)
  {
    if (numero % 2 != 0)
    {
      printf("%d", numero);
      if (numero < 20)
      {
        printf(", ");
      }
      else
      {
        printf("\n");
      }
    }
    numero++;
  }

  return 0;
}