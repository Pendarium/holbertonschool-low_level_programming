#include "main.h"
/**
*print_most_numbers - Point d'entrée du programme
*
*Description: Cette fonction est le point de départ du programme.
*
*Return: 0 si le programme se termine correctement
*/

int main(void)
{
int n;
for (n = 1; n <= 99; n++)
{
if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", n);
}
}
printf("Buzz");
putchar('\n');
return (0);
}
