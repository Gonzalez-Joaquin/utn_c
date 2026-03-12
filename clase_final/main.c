#include <stdio.h>
#include "include/menu.h"
#include "include/cuenta.h"
#include "include/io.h"

#define SALDO_INICIAL 1000.0f
#define RECARGO_EXTRACCION 50.0f
#define INTERES_MENSUAL 0.02f

static void imprimir_saldo(float saldo)
{
  printf("Saldo actual: %.2f\n", saldo);
}

int main(void)
{
  Cuenta cuenta = cuenta_crear(SALDO_INICIAL);

  MenuOpcion opcion;
  do
  {
    opcion = menu_mostrar_y_leer_opcion();

    switch (opcion)
    {
    case MENU_CONSULTAR_SALDO:
    {
      imprimir_saldo(cuenta_consultar_saldo(cuenta));
      break;
    }

    case MENU_DEPOSITAR:
    {
      float monto = io_leer_float("Ingrese monto a depositar: ");
      float nuevo = cuenta_depositar(cuenta.saldo, monto);

      if (nuevo != cuenta.saldo)
      {
        cuenta.saldo = nuevo;
        printf("Deposito realizado.\n");
      }
      else
      {
        printf("Monto invalido. No se realizo el deposito.\n");
      }
      imprimir_saldo(cuenta.saldo);
      break;
    }

    case MENU_RETIRAR:
    {
      float monto = io_leer_float("Ingrese monto a retirar: ");
      float nuevo = cuenta_retirar(cuenta.saldo, monto, RECARGO_EXTRACCION);

      if (nuevo != cuenta.saldo)
      {
        cuenta.saldo = nuevo;
        printf("Extraccion realizada (recargo %.2f).\n", RECARGO_EXTRACCION);
      }
      else
      {
        printf("No se pudo realizar la extraccion.\n");
      }
      imprimir_saldo(cuenta.saldo);
      break;
    }

    case MENU_TRANSFERIR:
    {
      float monto = io_leer_float("Ingrese monto a transferir: ");
      float nuevo = cuenta_transferir(cuenta.saldo, monto);

      if (nuevo != cuenta.saldo)
      {
        cuenta.saldo = nuevo;
        printf("Transferencia realizada.\n");
      }
      else
      {
        printf("No se pudo realizar la transferencia.\n");
      }
      imprimir_saldo(cuenta.saldo);
      break;
    }

    case MENU_RENDIMIENTO:
    {
      int meses = io_leer_int("Ingrese cantidad de meses: ");
      if (meses > 0)
      {
        float simulado = cuenta_calcular_rendimiento(cuenta.saldo, meses, INTERES_MENSUAL);
        printf("Saldo proyectado luego de %d meses al %.2f%% mensual: %.2f\n",
               meses, INTERES_MENSUAL * 100.0f, simulado);
        printf("(El saldo real NO se modifica)\n");
      }
      else
      {
        printf("Cantidad de meses invalida.\n");
      }
      break;
    }

    case MENU_SALIR:
      printf("Gracias por usar el sistema bancario. Chau!\n");
      break;

    default:
      printf("Opcion invalida.\n");
      break;
    }

  } while (opcion != MENU_SALIR);

  return 0;
}