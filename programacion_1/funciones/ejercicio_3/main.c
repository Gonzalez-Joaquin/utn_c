#include <stdio.h>

float calculateDiscount(float totalAmount, float discount);

int main()
{

  float total = 0, discount = 0;

  printf("Ingrese el monto total de la compra: ");
  scanf("%f", &total);

  printf("Ingrese el descuento a aplicar: ");
  scanf("%f", &discount);

  printf("El total de compra a pagar es:  $%.2f\n", calculateDiscount(total, discount));

  return 0;
}

float calculateDiscount(float totalAmount, float discount)
{
  return totalAmount - (totalAmount * (discount / 100));
}