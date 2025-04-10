#include <stdio.h>

int main (void)
{
  int num, i;
  float prom = 0;


  for(i = 0; i >= 0; i++)
  {
    printf("Ingresar el numero entero N°%d:\n", i+1);
    scanf("%d", &num);
    if(num == 0)
      break;
    prom += num;

  }

  prom /= i;

  printf("El promedio es %.2f\n", prom);
  return 0;
}
