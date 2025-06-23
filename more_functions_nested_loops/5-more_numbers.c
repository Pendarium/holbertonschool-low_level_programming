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

void more_numbers(void)
{
int n;
int i = 14; 
for (n = '0'; n <= i ; n++)
{
    if (n < '9')
    {
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
    }
else 
_putchar(n);
}
}