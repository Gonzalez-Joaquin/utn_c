#include <stdio.h>

int main()
{
  int promedio, calificacion;

  printf("Ingrese un alumno: ");
  scanf("%d", &calificacion);

  if (calificacion >= 6 && calificacion < 8)
  {
    printf("El alumno aprueba la materia.\n");
  }
  else if (calificacion >= 8)
  {
    printf("El alumno promociona la materia.\n");
  }
  else
  {
    printf("El alumno desaprueba la materia.\n");
  }

  return 0;
}