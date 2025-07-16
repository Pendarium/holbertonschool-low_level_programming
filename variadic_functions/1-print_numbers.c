#include "variadic_functions.h"

/**
 * print_numbers - Affiche des nombres suivis d’un séparateur
 * @separator: Chaîne à afficher entre les nombres
 * @n: Nombre d'entiers à afficher
 * Return: Rien
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int index;
	/* Compteur de boucle */

	va_list args;
	/* Déclaration de la liste d'arguments */

	va_start(args, n);
	/* Initialisation de la liste */

	for (index = 0; index < n; index++)
		{
		printf("%d", va_arg(args, int));
		/* Affiche l'entier suivant dans la liste */

			if (separator != NULL && index < n - 1)
			{
			printf("%s", separator);
			/* Affiche le séparateur sauf après le dernier nombre */
			}
		}

	printf("\n");
	/* Nouvelle ligne à la fin de l'affichage */

	va_end(args);
	/* Termine l'utilisation de la liste */
}
