#include "main.h"
/**
* puts_half - Inverse une chaîne de caractères
*
*@str:coijaecio
*
* Cette fonction échange les caractères de la chaîne en place,
* du début vers la fin, pour obtenir la version inversée de la chaîne.
*/
void puts_half(char *str)
{
int c = _strlen(str) - 1;
int i = c / 2;


for (c = 0; str[c] != '\0'; c++)
{
if (str[c] / 2 < str[i])
i++;
_putchar(str[i]);
}
_putchar('\n');
}
