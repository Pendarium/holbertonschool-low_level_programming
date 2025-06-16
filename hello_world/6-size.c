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
int i;
float f;
char c;
int long il;
int long long ill;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(il));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ill));
printf("Size of a float: %lu byte(s)\n", sizeof(f));

return (0);
}
