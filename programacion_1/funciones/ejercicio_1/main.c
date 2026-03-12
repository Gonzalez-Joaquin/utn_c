#include <stdio.h>

float calculateTotal(float price, int quantity);

int main()
{
  int quantity = 0;
  float price = 0;

  printf("Ingrese el precio del producto: ");
  scanf("%f", &price);
  printf("Ingrese la cantidad del producto: ");
  scanf("%d", &quantity);

  printf("El total a pagar es: %.2f\n", calculateTotal(price, quantity));

  return 0;
}

float calculateTotal(float price, int quantity)
{
  return price * quantity;
}