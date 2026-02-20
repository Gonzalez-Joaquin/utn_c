#include <stdio.h>

int main()
{
  int numero1, numero2;
  char opcion;

  printf("Ingrese dos numeros enteros: ");
  scanf("%d %d", &numero1, &numero2);

  printf("Opcion: ");
  scanf("%c", &opcion);
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");

  switch (opcion)
  {
  case '1':
    printf("El resultado es: %d\n", numero1 + numero2);
    break;
  case '2':
    printf("El resultado es: %d\n", numero1 - numero2);
    break;
  case '3':
    printf("El resultado es: %d\n", numero1 * numero2);
    break;
  case '4':
    printf("El resultado es: %d\n", numero1 / numero2);
    break;
  default:
    printf("Opcion invalida.\n");
    break;
  }

  return 0;
}