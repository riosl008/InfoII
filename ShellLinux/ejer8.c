#include <stdio.h>
#include <math.h>


int main(void)
{
  int num;

  printf("Introduce un numero entero (0 para salir):\n");
  scanf("%d", &num);

  if (num == 0)
    return 0;
  if (num < 0)
    fprintf(stderr, "ERROR: No se puede calcular la raiz cuadrada de un numero negativo\n");
  else
  {
    double raiz = sqrt((double)num);
    fprintf(stdout, "La raiz cuadrada de %d es %.2f\n", num, raiz);


  }
return 0;
}
