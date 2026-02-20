#include <stdio.h>

int main()
{
  float peso;
  int cantidad = 0;
  int pesosBajos = 0;
  int pesosMedios = 0;
  int pesosAltos = 0;

  printf("Ingrese el peso de las piezas: ");
  scanf("%f", &peso);

  while (peso != 0)
  {
    int categoria;

    cantidad++;

    categoria = (peso < 9.8f) ? 0 : (peso < 10.2f) ? 1 : 2;

    switch (categoria)
    {
      case 0:
        pesosBajos++;
        break;
      case 1:
        pesosMedios++;
        break;
      default:
        pesosAltos++;
        break;
    }
    
    printf("Ingrese el peso de las piezas: ");
    scanf("%f", &peso);
  }

  printf("Cantidad de piezas: %d\n", cantidad);
  printf("Piezas con peso entre 9.8 Kg. y 10.2 Kg.: %d\n", pesosMedios);
  printf("Piezas con peso mayor a 10.2 Kg.: %d\n", pesosAltos);
  printf("Piezas con peso menor a 9.8 Kg.: %d\n", pesosBajos);

  return 0;
}
