#include "main.h"
/**
*print_alphabet_x10 - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*
*Return: 0 si le programme se termine correctement
*/
int _islower(int c)
{
int nb;

for (nb = '0'; nb <= '9'; nb++)
{
putchar(nb);
if (nb < '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

}
