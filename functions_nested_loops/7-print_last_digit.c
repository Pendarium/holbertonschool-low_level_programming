#include "main.h"
/**
* print_last_digit - Vérifie si un caractère est une lettre minuscule.
* @l: Le caractère à tester (en code ASCII).
*
*Return: n si le caractère est une lettre minuscule (entre 'a' et 'z').
*
*/
int print_last_digit(int l)
{
int lastDigit = l % 10;

if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);

}
