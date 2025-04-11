#include <stdio.h>
#include <math.h>

double distancia (double, double, double, double);

int main (void)
{
printf("La distancia entre (%.1f, %.1f) y (%.1f, %.1f) es %.3f\n",
        1.0, 2.0, 3.0, 4.0, distancia (1.0, 2.0, 3.0, 4.0));
printf("La distancia entre (%.1f, %.1f) y (%.1f, %.1f) es %.3f\n",
        2.0, 3.0, 3.0, 2.0, distancia (2.0, 3.0, 3.0, 2.0));
printf("La distancia entre (%.1f, %.1f) y (%.1f, %.1f) es %.3f\n",
        -1.0, -1.0, 2.0, 2.0, distancia (-1.0, -1.0, 2.0, 2.0));


return 0;
}

double distancia (double a1, double b1, double a2, double b2)
{
double r = sqrt(pow(a2 - a1,2)+pow(b2 - b1,2));
return r;
}
