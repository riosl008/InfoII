#include <stdio.h>

int main (void)
{
  struct coor
  {
    float x;
    float y;
    double r;

  }circulo;

  printf("Ingrese las coordenas del circulo (x, y) separado por un espacio: ");
  scanf("%f %f", &circulo.x, &circulo.y);
  printf("Ingrese el radio del circulo: ");
  scanf("%le", &circulo.r);

  printf("\n\nEl circulo ingresado es:\n\tcentro:\t(%.2f, %.2f)\n\tradio:\t%.2f\n", circulo.x, circulo.y, circulo.r);

return 0;
}
