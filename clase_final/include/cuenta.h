#ifndef CUENTA_H
#define CUENTA_H

typedef struct {
    float saldo;
} Cuenta;

Cuenta cuenta_crear(float saldo_inicial);

float cuenta_consultar_saldo(Cuenta c);

float cuenta_depositar(float saldo_actual, float monto);
float cuenta_retirar(float saldo_actual, float monto, float recargo_fijo);
float cuenta_transferir(float saldo_actual, float monto);

float cuenta_calcular_rendimiento(float saldo_actual, int meses, float interes_mensual);

#endif