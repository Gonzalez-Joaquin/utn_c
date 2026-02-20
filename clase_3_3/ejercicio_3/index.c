#include <stdio.h>

int main()
{
  int cuenta = 0;
  float saldo = 0;
  float suma = 0;
  char estado;

  printf("Ingrese el número de cuentas: ");
  scanf("%d", &cuenta);

  while (cuenta > 0)
  {
    printf("Ingrese el saldo de la cuenta: ");
    scanf("%f", &saldo);

    estado = (saldo > 0) ? 'A' : (saldo < 0) ? 'D' : 'N';

    switch (estado)
    {
      case 'A':
        printf("Cuenta: %d, Estado: Acreedor\n", cuenta);
        break;
      case 'D':
        printf("Cuenta: %d, Estado: Deudor\n", cuenta);
        break;
      default:
        printf("Cuenta: %d, Estado: Nulo\n", cuenta);
        break;
    }

    suma += saldo;
    cuenta--;
  }

  printf("Suma total de saldos acreedores: %.2f\n", suma);

  return 0;
}
