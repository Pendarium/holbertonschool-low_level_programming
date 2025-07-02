#include "main.h"

/**
 * _fonction_aux - cherche la racine carrée entière de n récursivement
 * @n: le nombre dont on cherche la racine carrée
 * @racine: le candidat courant pour la racine carrée
 *
 * Cette fonction utilise la récursion pour tester si racine * racine == n.
 * Si oui, elle retourne racine. Si racine * racine dépasse n, retourne -1.
 *
 * Return: la racine carrée entière de n ou -1 si elle n'existe pas
 */
int _fonction_aux(int n, int racine)
{
	if (racine * racine == n)
	{
	/* Racine carrée exacte trouvée */
		return (racine);
	}
	if (racine * racine > n)
	{
	/* Pas de racine carrée entière pour n */
		return (-1);
	}
	/* Appel récursif avec racine incrémentée */
	return (_fonction_aux(n, racine + 1));
}

/**
 * _sqrt_recursion - calcule la racine carrée entière d'un nombre
 * @n: le nombre dont on veut la racine carrée
 *
 * Si n est négatif, retourne -1. Sinon, utilise _fonction_aux pour
 * trouver la racine carrée entière de n.
 *
 * Return: la racine carrée entière de n ou -1 si n < 0 ou pas de racine
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	/* Racine carrée non définie pour les nombres négatifs */
		return (-1);
	}
	/* Recherche de la racine carrée entière en commençant à 1 */
	return (_fonction_aux(n, 1));
}
