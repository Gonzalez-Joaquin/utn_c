#include <stdio.h>

int main()
{
  int numero1, numero2;

  printf("Ingrese dos numeros enteros: ");
  scanf("%d %d", &numero1, &numero2);

  if (numero1 == numero2)
  {
    printf("El producto de los dos numeros es: %d\n", numero1 * numero2);
  }
  else if (numero1 > numero2)
  {
    printf("El resto de %d dividido entre %d es: %d\n", numero1, numero2, numero1 % numero2);
  }
  else
  {
    printf("El resto de %d dividido entre %d es: %d\n", numero2, numero1, numero2 % numero1);
  }

  return 0;
}