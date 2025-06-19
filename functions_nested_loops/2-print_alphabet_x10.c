#include "main.h"
/**
*print_alphabet_x10 - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*
*Return: 0 si le programme se termine correctement
*/
void print_alphabet_x10(void)
{

int az;
int x;
for (x = 0; x < 10; x++)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
}
}
