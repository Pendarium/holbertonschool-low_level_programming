#include "main.h"
/* Inclusion du fichier d'en-tête principal */

/**
 * _pow_recursion - Calcule x puissance y de façon récursive
 * @x: base entière
 * @y: exposant entier (>= 0)
 *
 * Return: la valeur de x^y, ou -1 si y est négatif
 */

int _pow_recursion(int x, int y)
/* Fonction qui retourne x^y avec récursivité */
{
	if (y < 0)
	/* Cas où l'exposant est négatif */
	{
	return (-1);
	/* Retourne -1 pour indiquer une erreur */
	}
	if (y == 0)
	/* Cas de base : tout nombre puissance 0 vaut 1 */
	{
		return (1);
		/* Retourne 1 */
	}
	return (x * _pow_recursion(x, y - 1));
	/* Appel récursif : x * x^(y-1) */
}
