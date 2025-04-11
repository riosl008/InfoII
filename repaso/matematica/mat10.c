#include <stdio.h>
#include <math.h>
#define TAM 3

double distancia (double, double, double, double);

int main (void)
{
  struct puntos
  {
    double x1;
    double y1;
    double x2;
    double y2;
  };

  struct puntos p[TAM] = {
                   {1.0, 2.0, 3.0, 4.0},
                   {2.0, 3.0, 3.0, 2.0},
                   {-1.0, -1.0, 2.0, 2.0}
                  };
  for (int i = 0; i < TAM; i++)
  {
    printf("La distancia entre (%.1f, %.1f) y (%.1f, %.1f) es %.3f\n",
            p[i].x1, p[i].y1, p[i].x2, p[i].y2, distancia (p[i].x1, p[i].y1, p[i].x2, p[i].y2));
  }

return 0;
}

double distancia (double a1, double b1, double a2, double b2)
{
double r = sqrt(pow(a2 - a1,2)+pow(b2 - b1,2));
return r;
}
