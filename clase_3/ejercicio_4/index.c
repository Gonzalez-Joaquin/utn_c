#include <stdio.h>

int main()
{
  int numero;

  printf("Ingrese un numero entero: ");
  scanf("%d", &numero);

  if (numero % 2 == 0 && numero > 10)
  {
    printf("El numero es par y mayor a 10.\n");
  }
  else if (numero >= 5 && numero <= 10)
  {
    printf("El numero es entre 5 y 10.\n");
  }
  else if (numero % 2 != 0)
  {
    printf("El numero es impar.\n");
  }
  else
  {
    printf("El numero es menor a 5.\n");
  }

  return 0;
}