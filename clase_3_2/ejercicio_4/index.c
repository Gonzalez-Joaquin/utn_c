#include <stdio.h>

int main()
{
  int numero = 0;
  float promedio = 0;
  float suma = 0;

  printf("Ingrese la cantidad de notas: ");
  scanf("%d", &numero);

  printf("Ingrese las notas: ");
  while (numero > 0)
  {
    float nota;
    scanf("%f", &nota);
    suma += nota;
    numero--;
  }

  promedio = suma / numero;

  printf("El promedio es: %.2f\n", promedio);

  return 0;
}