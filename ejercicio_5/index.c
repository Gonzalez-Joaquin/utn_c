#include <stdio.h>
#define PI 3.14159265358979323846

float areaCirculo(float radio){
  return PI * radio * radio;
}

int main(){
  float radio;

  printf("Ingrese el radio de un circulo: ");
  scanf("%f", &radio);

  printf("El area es: %.2f\n", areaCirculo(radio));
  
  return 0;
}
