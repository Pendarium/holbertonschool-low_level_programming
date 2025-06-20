#include "main.h"

/**
*print_to_98 - - Entry point
*@n: valeur
*
*Écrivez une fonction qui imprime tous les nombres naturels de n à 98,
*suivis d'une nouvelle ligne.
*
* Return: Always 0
*/

void print_to_98(int n)

{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}