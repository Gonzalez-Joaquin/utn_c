#include <stdio.h>

int main()
{
  int valor = 0;
  int suma = 0;

  printf("Ingrese un valor positivo o negativo: ");
  scanf("%d", &valor);

  while (valor != 0)
  {
    suma += valor;
    printf("Ingrese un valor positivo o negativo: ");
    scanf("%d", &valor);
  }

  printf("El valor acumulado es: %d\n", suma);

  return 0;
}