#include <stdio.h>
/**
*main - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*
*Return: 0 si le programme se termine correctement
*/
int main(void)
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

return (0);
}
