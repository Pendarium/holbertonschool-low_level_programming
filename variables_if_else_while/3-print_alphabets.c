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
int AZ;

for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
}
for (AZ = 'A'; AZ <= 'Z'; AZ++)
{
putchar(AZ);
}
putchar('\n');

return (0);
}
