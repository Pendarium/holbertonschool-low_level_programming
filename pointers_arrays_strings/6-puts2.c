#include "main.h"

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