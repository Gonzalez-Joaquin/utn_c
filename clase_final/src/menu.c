#include <stdio.h>
#include "menu.h"
#include "io.h"

MenuOpcion menu_mostrar_y_leer_opcion(void)
{
  printf("\n====== MENU BANCO ======\n");
  printf("1. Consultar saldo\n");
  printf("2. Depositar dinero\n");
  printf("3. Retirar dinero (con recargo)\n");
  printf("4. Transferir dinero\n");
  printf("5. Calcular rendimientos por meses\n");
  printf("6. Salir\n");

  int opcion = io_leer_int("Seleccione una opcion: ");
  return (MenuOpcion)opcion;
}