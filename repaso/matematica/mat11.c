#include <stdio.h>
#define TAM 3

int main (void)
{
  float esc;
  struct vectores
  {
  float x;
  float y;
  float z;

  }v[TAM];

  printf("Producto escalar y vectorial de vectores en 3 dimensiones\n");

  for (int i = 0; i < TAM - 1; i++)
  {
    printf("Ingrese los elementos del vector N°%d separados por espacio: ", i+1);
    scanf("%f %f %f", &v[i].x, &v[i].y, &v[i].z);
  }

  esc = v[0].x*v[1].x + v[0].y*v[1].y + v[0].z*v[1].z;
  v[2].x = v[0].y*v[1].z - v[0].z*v[1].y;
  v[2].y = -(v[0].x*v[1].z - v[0].z*v[1].x);
  v[2].z = (v[0].x*v[1].y - v[0].y*v[1].x);
  printf("Producto punto: %.2f\n", esc);
  printf("Producto vectorial: %.2f %.2f %.2f\n", v[2].x, v[2].y, v[2].z);
return 0;
}
