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
char i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
