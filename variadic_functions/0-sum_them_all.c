#include "variadic_functions.h"

/**
 * sum_them_all - Retourne la somme de tous les paramètres
 * @n: Nombre d'arguments
 * Return: Somme des paramètres ou 0 si n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	/* Variable pour stocker la somme */
	unsigned int index;
	/* Compteur de boucle */

	va_list args;
	/* Déclaration de la liste d'arguments */

	va_start(args, n);
	/* Initialisation de la liste */

	if (n == 0)
	return (0);
	/* Retourne 0 si aucun argument */

	for (index = 0; index < n; index++)
	sum += va_arg(args, int);
	/*sum = sum + va_arg*/
	/* Ajoute chaque argument à la somme */

	va_end(args);
	/* Termine l'utilisation de la liste */

	return (sum);
	/* Retourne la somme totale */
}
