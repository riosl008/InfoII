#include <stdio.h>
#include <math.h>
#define TAM 3

double distancia (double , double , double , double );

int main (void)
{
  double px1[TAM] = {1.0, 2.0, -1.0}, py1[TAM] = {2.0, 3.0, -1.0}, px2[TAM] = {3.0, 3.0, 2.0}, py2[TAM] = {4.0, 2.0, 2.0};

  for (int i = 0; i < TAM; i++)
  {
    printf("La distancia entre (%.1f, %.1f) y (%.1f, %.1f) es %.3f\n",
            px1[i], py1[i], px2[i], py2[i], distancia (px1[i], py1[i], px2[i], py2[i]));
  }

return 0;
}

double distancia (double a1, double b1, double a2, double b2)
{
double r = sqrt(pow(a2 - a1,2)+pow(b2 - b1,2));
return r;
}
