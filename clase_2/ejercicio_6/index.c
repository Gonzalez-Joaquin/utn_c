#include <stdio.h>

int main() {
  int num1, num2;

  printf("Ingrese número 1:");
  scanf("%i", &num1);

  printf("Ingrese número 2:");
  scanf("%i", &num2);

  // Otra manera de pensar.
  if(num1 == num2) {
    printf("Ambos números son iguales\n");
    return 0; // Esto es para que finalice el bloque de código y no siga ejecutando el resto de la función
  }
  
  printf("El orden de forma ascendente es: ");
  
  if( num1 > num2 ) {
    printf("%i, %i \n", num1, num2);
  } else {
    printf("%i, %i \n", num2, num1);
  }
  
  return 0;
}