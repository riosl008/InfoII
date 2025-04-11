#include <stdio.h>
#define N 10
#define M 10

int main (void)
{
  int n, m;

  printf("Ingresar cantidad de filas:\n");
  scanf("%d", &n);
  printf("Ingresar cantidad de columnas:\n");
  scanf("%d", &m);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("(%d, %d) ", i, j);
    }
    printf("\n");
  }


return 0;
}
