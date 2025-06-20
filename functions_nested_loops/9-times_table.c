#include "main.h"
/**
* times_table - Entry point
* facteur1: premier facteur de la multiplication
* facteur2: second facteur de la multiplication
* produit: resultat de la division
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/
void times_table(void)
{
int facteur1;
int facteur2;
int produit;
for (facteur1 = 0 ; facteur1 <= 9 ; facteur1++)
	{
	_putchar('0');
	for (facteur2 = 1 ; facteur2 <= 9 ; facteur2++)
		{
		_putchar(',');
		_putchar(' ');
		produit = facteur1 * facteur2;
		if (produit <= 9)
			_putchar(' ');
		else
			_putchar((produit / 10) + '0');
		_putchar((produit % 10) + '0');
		}
	_putchar('\n');
	}
}
