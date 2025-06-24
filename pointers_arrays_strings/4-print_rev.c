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

void print_rev(char *s)
{

int i = 0;
int j = strlen(s);

while (i < j) 
{
char c = s[i];
s[i] = s[j];
s[j] = c;
i++;
j--;
}
_putchar('\n');
}   
