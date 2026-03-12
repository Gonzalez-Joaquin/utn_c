#include <stdio.h>

float calculateDiscount(float totalAmount, int quantity);

int main()
{

  int quantity = 0;
  float total = 0;

  printf("Ingrese el monto total de la compra: ");
  scanf("%f", &total);

  printf("Ingrese la cantidad de productos comprados: ");
  scanf("%d", &quantity);

  printf("El monto a descontar es: %.2f\n", calculateDiscount(total, quantity));

  return 0;
}

float calculateDiscount(float totalAmount, int quantity)
{
  if (totalAmount > 50000 && quantity > 10)
  {
    return totalAmount * 0.15;
  }

  if (totalAmount > 100000 && quantity >= 20)
  {
    return totalAmount * 0.20;
  }

  return 0;
}