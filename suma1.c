#include <stdio.h>

int main (void)
{
int n1, n2, sum;

printf("Este programa toma dos numeros por teclado, los suma y los imprime por pantalla\n");
printf("\nIngresar el primer entero: ");
scanf("%d", &n1);
printf("\nIngresar el segundo entero: ");
scanf("%d", &n2);

sum = n1 + n2;

printf("\nLa suma es %d\n", sum);
return 0;
}
