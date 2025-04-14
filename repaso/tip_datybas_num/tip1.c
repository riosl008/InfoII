#include <stdio.h>

int main (void)
{
  printf("char:\t\t %zu byte\nunsigned char:\t %zu byte\nint:\t\t %zu byte\nunsigned int:\t %zu byte\n",
          sizeof (char), sizeof (unsigned char), sizeof (int), sizeof(unsigned int));
  printf("short:\t\t %zu byte\nlong:\t\t %zu byte\nfloat:\t\t %zu byte\ndouble:\t\t %zu byte\n",
          sizeof (short), sizeof (long), sizeof (float), sizeof(double));

return 0;
}
