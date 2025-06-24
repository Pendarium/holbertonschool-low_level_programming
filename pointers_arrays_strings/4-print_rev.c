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

int _strlen(char *s)
{
char *p;
if (s == NULL)
return (0);

p = s;
while (*p != '\0')
p++;
return (p - s);
}
void print_rev(char *s)
{
    int i;
    i = _strlen(s) - 1;
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    _putchar('\n');
}
