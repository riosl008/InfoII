#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
  int a, b, c;
  double solu1, solu2, real;
  double ima, raiz;
  printf("Ingrese los coeficientes (a, b, c) separados por espacio: ");
  scanf("%d %d %d", &a, &b, &c);

  raiz = (b * b) - 4*a*c;
  printf("Solución: ");
  if (raiz < 0)
  {
    printf("Complejos conjugados (RCC)\n");
    real = -b / 2*a;
    ima = sqrt(abs(raiz)) / (2*a);
    printf("%.3f +j %.3f\n", real, ima);
    printf("%.3f -j %.3f\n", real, ima);

  }
  else
  {
    solu1 = (-b + sqrt(raiz))/(2*a);
    solu2 = (-b - sqrt(raiz))/(2*a);

    if (solu1 == solu2)
    {
      printf("Raices iguales (RI)\n");
      printf("%.3f\n", solu1);
    }
    else
    {
      printf("Raices reales distintas (RRD)\n");
      printf("%.3f\n", solu1);
      printf("%.3f\n", solu2);
    }
  }

return 0;
}
