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
int af;
int nb;

for (nb = '0'; nb <= '9'; nb++)
{
putchar(nb);
}
for (af = 'a'; af <= 'f'; af++)
{
putchar(af);
}

putchar('\n');

return (0);
}