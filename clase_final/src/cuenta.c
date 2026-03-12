#include "cuenta.h"

Cuenta cuenta_crear(float saldo_inicial)
{
  Cuenta c;
  c.saldo = saldo_inicial;
  return c;
}

float cuenta_consultar_saldo(Cuenta c)
{
  return c.saldo;
}

float cuenta_depositar(float saldo_actual, float monto)
{
  if (monto > 0)
  {
    return saldo_actual + monto;
  }
  return saldo_actual;
}

float cuenta_retirar(float saldo_actual, float monto, float recargo_fijo)
{
  if (monto <= 0)
    return saldo_actual;

  float total = monto + recargo_fijo;
  if (total <= saldo_actual)
  {
    return saldo_actual - total;
  }
  return saldo_actual;
}

float cuenta_transferir(float saldo_actual, float monto)
{
  if (monto > 0 && monto <= saldo_actual)
  {
    return saldo_actual - monto;
  }
  return saldo_actual;
}

float cuenta_calcular_rendimiento(float saldo_actual, int meses, float interes_mensual)
{
  if (meses <= 0)
    return saldo_actual;
  if (interes_mensual < 0)
    return saldo_actual;

  float resultado = saldo_actual;
  for (int i = 0; i < meses; i++)
  {
    resultado += resultado * interes_mensual;
  }
  return resultado;
}