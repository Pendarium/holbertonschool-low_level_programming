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
int s;

for (s = 0; s <= 9; s++)
{
    printf("%d", s);
}

putchar('\n');


return (0);
}
