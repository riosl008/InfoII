#include <stdio.h>

int main (void)
{
  int cant, num;
  float prom = 0;

  printf("Ingresar cantidad de numeros enteros a calcular promedio:\n");
  scanf("%d", &cant);

  for(int i = 0; i < cant; i++)
  {
    printf("Ingresar el numero entero N°%d:\n", i+1);
    scanf("%d", &num);

    prom += num;
  }

  prom /= cant;

  printf("El promedio es %.2f\n", prom);
  return 0;
}
