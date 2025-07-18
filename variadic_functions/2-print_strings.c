#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	
	unsigned int index;
	
	/* Compteur de boucle */

	va_list args;
	/* Déclaration de la liste d'arguments */

	va_start(args, n);
	/* Initialisation de la liste */

	for (index = 0; index < n; index++)
		{
			char *str = va_arg(args, char*);

			if (str == NULL)
			{
    		printf("(nil)");
			}
			
			else
			{
			printf("%s", va_arg(args, char*));
			/* Affiche l'entier suivant dans la liste */
			}

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
