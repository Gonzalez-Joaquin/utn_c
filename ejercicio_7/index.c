#include <stdio.h>

float calcularIva(float precio){
  return precio * 1.21;
}

int main() {
  float precio;

  printf("Ingrese el precio de su producto: ");
  scanf("%f", &precio);

  printf("El precio con IVA es: %.2f\n", calcularIva(precio));

  return 0;
}