#include <stdio.h>

int main (void)
{
  int num, den;
  float res;
  do
  {
    printf("Ingresar primer numeros entero: ");
    scanf("%d", &num);
    printf("Ingresar segundo numero entero: ");
    scanf("%d", &den);

    if (den != 0)
    {
      res = (float)num/den;
      printf("El resultado es %.10f\n\n", res);
    }
  }while(den != 0);

return 0;
}
