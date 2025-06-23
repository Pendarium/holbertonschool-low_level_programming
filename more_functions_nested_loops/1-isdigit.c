#include "main.h"

/**
*_isdigit - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*@c:ekzokfisk,q
*Return: 0 si le programme se termine correctement
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
