#include "main.h"
/**
* _abs - Vérifie si un caractère est une lettre minuscule.
* @n: Le caractère à tester (en code ASCII).
*
*Return: n si le caractère est une lettre minuscule (entre 'a' et 'z').
*
*/
int _abs(int n)
{

if (n < 0)
return (-n);
else
return (n);
}
