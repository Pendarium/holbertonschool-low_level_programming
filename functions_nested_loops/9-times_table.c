#include "main.h"

void times_table(void)
{
int i;
int j;
for(i = 0; i <=9; i++)
{
    for (j = 0; j <= 9; j++)
    {
    if (i * j < 10)
    {
    _putchar(' ');
    _putchar((i * j) + '0');
    }
    else
    {
    _putchar((i * j) / 10 + '0');
    _putchar((i * j) % 10 +'0');
    }

        _putchar(',');
        _putchar(' ');
    }
    _putchar('\n');
}
}