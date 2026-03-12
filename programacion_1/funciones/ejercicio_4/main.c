#include <stdio.h>

void viewDetail(int quantity, float price, float partial, float discount, float total);

int main()
{
  int quantity = 12;
  float price = 200;
  float partial = 2400;
  float discount = 360;
  float total = 2040;

  viewDetail(quantity, price, partial, discount, total);

  return 0;
}

void viewDetail(int quantity, float price, float partial, float discount, float total)
{
  printf("Cantidad de productos ............... %i un.\n", quantity);
  printf("Precio por producto ................. $ %.2f\n", price);
  printf("Total parcial ....................... $ %.2f\n", partial);
  printf("Descuento aplicado .................. -$ %.2f\n", discount);
  printf("Monto a pagar ....................... $ %.2f\n", total);
}