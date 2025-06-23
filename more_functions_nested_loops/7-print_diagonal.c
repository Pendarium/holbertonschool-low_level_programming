#include "main.h"
/**
*void print_diagonal - Entry point
* @n:jiohbvrf
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/

void print_diagonal(int n)
{
int s;
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (s = 0; s < i; s++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
