#include <stdio.h>

int main()
{
  int numero1, numero2, numero3;

  printf("Ingrese tres numeros enteros: ");
  scanf("%d %d %d", &numero1, &numero2, &numero3);

  if (numero1 > numero2 && numero1 > numero3)
  {
    printf("El mayor numero es: %d\n", numero1);
  }
  else if (numero2 > numero1 && numero2 > numero3)
  {
    printf("El mayor numero es: %d\n", numero2);
  }
  else
  {
    printf("El mayor numero es: %d\n", numero3);
  }

  return 0;
}