#include "main.h"

/**
*_isupper - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*@c:ekzokfisk,q
*Return: 0 si le programme se termine correctement
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
