### Trabajo práctico repaso de funciones.

Un negocio desea un sistema que le permita llevar sus ventas. Nos contrata a
nosotros para la realización del programa. Hemos determinado que el sistema
necesita lo siguiente (Suponemos que solo vende un producto):

1) Hacer una función que reciba como parámetro la cantidad de productos y el
precio, y retorne el monto total de la venta.

2) Una función para determinar y calcular el descuento a aplicar (si es que tiene).
Por parámetro debe ingresar el monto total de la compra y la cantidad de
producto comprado. Si el monto de la compra supera los $50.000 y son más de
10 productos, tiene un descuento del 15%. Si la compra supera los $100.000 y
la cantidad de productos es 20 o más, tiene un descuento del 20%. Si no cumple
ninguno de los requisitos, no se le aplica descuento alguno. La función debe
calcular y retornar el monto en pesos a descontar del monto total de la compra.

3) Hacer una función que reciba por parámetro el monto total de la compra y el
monto a descontar, haga el cálculo correspondiente para obtener el monto a
pagar con el descuento, y lo retorne.

4) Hacer una función que muestre por pantalla el detalle de la compra. Ejemplo:
Cantidad de productos ……………………… 12 un.
Precio por producto ………………………….. $ 200
Total parcial …………………………………. $ 2400
Descuento aplicado ……………………….... -$ 360
Monto a pagar …………………………….... $ 2040

5) Hacer una función que realice una venta. Para ello, primero se le pedirá al
usuario del sistema que ingrese que la cantidad de productos comprados por el
cliente y el precio por unidad del producto. Luego, dicha función principal tiene
que llamar a todas las anteriores (que hacen las veces de funciones auxiliares
de la función principal de venta) para poder calcular el total de la compra, calcular
el descuento a aplicar, calcular el total de la compra con descuento, y finalmente
mostrar el detalle de la compra.