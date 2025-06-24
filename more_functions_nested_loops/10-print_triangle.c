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

int i;
int j =10;

if (size <= 0)
{
_putchar('\n');
}
for (i = 9; i >= 0; i--)
	{
	for (size = 0; size <= i; size++)
		{
		if (size >= i)
		_putchar('#');
		else if (i >= size)
		_putchar('1');
		else if (size >= j)
		_putchar('#');
		}

	_putchar('\n');
	}
}
