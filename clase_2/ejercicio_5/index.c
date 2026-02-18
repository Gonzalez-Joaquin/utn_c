#include <stdio.h>
#define descuento 20

int main()
{
  int totalCompra, totalPago;

  printf("Ingrese la cantidad a pagar: ");
  scanf("%i", &totalCompra);

  totalPago = totalCompra;

  if(totalCompra > 5000) {
    totalPago = totalCompra - (totalCompra * descuento / 100);
  }


  printf("La cantidad a pagar es: %i\n", totalPago);

  return 0;
}
