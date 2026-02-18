#include <stdio.h>

int main() {
  int edad = 0;

  printf("Ingrese su edad: ");
  scanf("%d", &edad);
  
  if (edad >= 18) {
    printf("Eres mayor de edad");
  } else {
    printf("Eres menor de edad");
  }

  return 0;
}
