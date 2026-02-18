#include <stdio.h>

int main(){
  int numeros[3] = {1, 2, 3};

  for (int i = 0; i < 3; i++){
    printf("Ingrese el numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  printf("Los números en orden inverso son: ");

  for (int i = 3; i > 0; i--){
    printf("%d, ", numeros[i - 1]);
  }

  printf("\n");

  return 0;
}