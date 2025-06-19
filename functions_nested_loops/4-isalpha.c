#include "main.h"
/**
* _islower - Vérifie si un caractère est une lettre minuscule.
* @c: Le caractère à tester (en code ASCII).
*
*Return: 1 si le caractère est une lettre minuscule (entre 'a' et 'z').
*
*/
int _isalpha(int c)
{
if (isalpha(c))
{
putchar(c);
return (1);
}
else
{
return (0);
}
}
