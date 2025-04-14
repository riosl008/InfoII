#include <stdio.h>

void bin (unsigned char);

int main (void)
{
  int num;

  printf("Ingrese un numero entero entre 0 y 255 (-1 para salir):\n");
  do
  {
    scanf("%d", &num);
    if (num > 255)
      printf("Fuera de rango\nIngrese nuevamente:\n");
    if (num < -1)
      printf("ERROR: Ingrese nuevamente:\n");
    if (num == -1)
      return 0;
  }while((num > 255) || (num < -1));
  if ((num > -1) || (num < 256))
  printf("\t%03d d = 0x%02X = ", num, num);
  bin (num);
  printf(" b\n");

return 0;
}

void bin (unsigned char numero)
{
  for (int i = 7; i >= 0; i--)
  {
    printf("%d", (numero >>i) & 1);
    if (i == 4)
      printf(" ");
  }
}
