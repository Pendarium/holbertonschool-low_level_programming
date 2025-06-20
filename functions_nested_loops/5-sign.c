#include "main.h"
/**
* _isalpha - Vérifie si un caractère est une lettre minuscule.
* @c: Le caractère à tester (en code ASCII).
*
*Return: 1 si le caractère est une lettre minuscule (entre 'a' et 'z').
*
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}

