#include <stdio.h>


int main(){
  int alumnos, alumnas;
  float porcentajeAlumnos, porcentajeAlumnas;

  printf("Ingrese el numero de alumnos: ");
  scanf("%d", &alumnos);

  printf("Ingrese el numero de alumnas: ");
  scanf("%d", &alumnas);

  int total = alumnos + alumnas;
  
  if (total > 0) {
    porcentajeAlumnos = (float)alumnos * 100.0f / total;
    porcentajeAlumnas = (float)alumnas * 100.0f / total;
  } else {
    porcentajeAlumnos = 0.0f;
    porcentajeAlumnas = 0.0f;
  }

  printf("El porcentaje de alumnos es: %.2f%%\n", porcentajeAlumnos);
  printf("El porcentaje de alumnas es: %.2f%%\n", porcentajeAlumnas);
  
  return 0;
}
