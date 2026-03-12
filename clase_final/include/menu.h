#ifndef MENU_H
#define MENU_H

typedef enum {
    MENU_CONSULTAR_SALDO = 1,
    MENU_DEPOSITAR       = 2,
    MENU_RETIRAR         = 3,
    MENU_TRANSFERIR      = 4,
    MENU_RENDIMIENTO     = 5,
    MENU_SALIR           = 6
} MenuOpcion;

MenuOpcion menu_mostrar_y_leer_opcion(void);

#endif