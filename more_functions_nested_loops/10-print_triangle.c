#include"main.h"
/**
*print_triangle - Entry point
* @n:jiohbvrf
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/


void print_triangle(int size)
{
int s;
int i;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (s = 0; s < i; s++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
