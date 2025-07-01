#include "main.h"
/* Inclusion du fichier d'en-tête principal */

/**
 * factorial - Calcule la factorielle d'un entier de façon récursive
 * @n: entier dont on veut calculer la factorielle
 *
 * Return: la factorielle de n, ou -1 si n est négatif
 */

int factorial(int n)
/* Déclare une fonction qui retourne la factorielle de n */
{
	if (n < 0)
	/* Vérifie si n est négatif */
	{
		return (-1);
		/* Retourne -1 si la factorielle n'est pas définie */
	}
	if (n == 0)
	/* Vérifie si n est égal à 0 (cas de base) */
	{
		return (1);
		/* Retourne 1 car 0! = 1 */
	}
	return (n * factorial(n - 1));
	/* Appel récursif : multiplie n par la factorielle de (n - 1) */
}
