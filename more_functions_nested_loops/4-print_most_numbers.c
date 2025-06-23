#include "main.h"
/**
*print_most_numbers - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*
*Return: 0 si le programme se termine correctement
*/

void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
if (n != '2' && n != '4')
{
_putchar (n)
}
_putchar('\n')

}
