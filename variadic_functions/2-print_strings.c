#include "variadic_functions.h"
/* Inclusion de l'en-tête pour les fonctions */

/**
 * print_strings - Affiche des chaînes de caractères séparées
 * @separator: Chaîne utilisée pour séparer les chaînes affichées
 * @n: Nombre de chaînes passées à la fonction
 *
 * Description: Affiche des chaînes données en arguments,
 * séparées si précisé.
 */

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
	/* Récupère la chaîne suivante */

	if (str == NULL)
	{
		printf("(nil)");
			/* Affiche (nil) si la chaîne est NULL */
	}

	else
	{
		printf("%s", str);
			/* Affiche la chaîne */
	}

	if (separator != NULL && index < n - 1)
	{
		printf("%s", separator);
			/* Affiche le séparateur si nécessaire */
	}
}

printf("\n");
/* Nouvelle ligne à la fin de l'affichage */

va_end(args);
/* Termine l'utilisation de la liste */
}
