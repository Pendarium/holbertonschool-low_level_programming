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
double d;
char c;

printf("Size of a char: %lu\n", sizeof(c));
printf("Size of an int: \n %lu", sizeof(i));
printf("Size of a long int: \n %lu", sizeof(i));
printf("Size of a long long int: \n %lu", sizeof(d));
printf("Size of a float: \n %lu", sizeof(i));

return (0);
}
