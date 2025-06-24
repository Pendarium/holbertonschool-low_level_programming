#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string (int)
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
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be reversed
 *
 * Return: Nothing
 */
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
