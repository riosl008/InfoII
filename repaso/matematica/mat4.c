#include <stdio.h>
#define TAM 10
int factorial (int);

int main (void)
{

  for (int i = 1; i <= TAM; i++)
  {
    printf("%d! = %d\n", i, factorial(i));

  }


return 0;
}

int factorial (int numero)
{
  int res = numero;

  for (int j = numero-1; j > 0; j--)
  {
    res *= j;

  }


return res;
}
