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
int az;

for (az = 'a'; az <= 'z'; az++)
{
if (az != 'q' && az != 'e')
putchar(az);
}
putchar('\n');

return (0);
}
