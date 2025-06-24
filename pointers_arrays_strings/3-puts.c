#include "main.h"
/**
*_puts - Entry point
* @str:jiohbvrf
*
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/

void _puts(char *str)
{
int c;

for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
