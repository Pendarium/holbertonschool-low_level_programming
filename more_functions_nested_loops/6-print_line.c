#include "main.h"
/**
*print_line - Entry point
* @n:jiohbvrf
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/

void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; ++a)
_putchar('_');
}
_putchar('\n');
}
