#include <stdio.h>

int main(){

  float precio, descuento;

  printf("Ingrese el precio del producto: ");
  scanf("%f", &precio);
  
  printf("Ingrese el descuento: ");
  scanf("%f", &descuento);

  printf("El precio con descuento es: %.2f\n", precio - (precio * (descuento / 100.0f)));

  return 0;

}
