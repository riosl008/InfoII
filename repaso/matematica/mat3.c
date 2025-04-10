#include <stdio.h>
#define TAM 50

double promedio (int *, int);

int main (void)
{
  int num[TAM], i;

  for(i = 0; i >= 0; i++)
  {
    printf("Ingresar el numero entero N°%d:\n", i+1);
    scanf("%d", &num[i]);
    if(num[i] == 0)
      break;
  }
  printf("El promedio es %.2f\n", promedio(num,i));
  return 0;
}

double promedio (int *numeros, int cantidad)
{
  int suma = 0;
  if (cantidad == 0)
    return 0.0;
  for (int j = 0; j < cantidad; j++)
  {
  suma += numeros[j];
  }
return (double)suma/cantidad;
}

