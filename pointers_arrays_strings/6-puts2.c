#include "main.h"
/**
* puts2 - Inverse une chaîne de caractères
*
*@str:coijaecio ,
* Cette fonction échange les caractères de la chaîne en place,
* du début vers la fin, pour obtenir la version inversée de la chaîne.
*/
void puts2(char *str)
{
int c;
_putchar(str[1]);
_putchar('\n');
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
