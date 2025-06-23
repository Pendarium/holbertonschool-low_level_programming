#include "main.h"
/**
*more_numbers - Entry point
* facteur1: premier facteur de la multiplication
* facteur2: second facteur de la multiplication
* produit: resultat de la division
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/

void more_numbers(void)
{
int n, i;

for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i > 10)

_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}
