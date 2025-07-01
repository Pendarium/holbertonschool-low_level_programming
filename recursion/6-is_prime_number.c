#include "main.h"

/**
 * _fonction_aux - cherche la racine carrée entière de n récursivement
 * @n: le nombre dont on cherche la racine carrée
 * @premier: le candidat courant pour la racine carrée
 *
 * Cette fonction utilise la récursion pour tester si racine * racine == n.
 * Si oui, elle retourne racine. Si racine * racine dépasse n, retourne -1.
 *
 * Return: la racine carrée entière de n ou -1 si elle n'existe pas
 */
int _fonction_aux(int n, int premier)
{
	if (premier * premier > n)
	/* si premier^2 dépasse n, n est premier */
	{
		return (1);
	/* n est premier */
	}
	if (n % premier == 0)
	/* si n est divisible par premier */
	{
		return (0);
	/* n n'est pas premier */
	}
	return (_fonction_aux(n, premier + 1));
	/* test récursif suivant */
}

/**
 * is_prime_number - teste si un nombre est premier
 * @n: nombre à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
	/* les nombres <= 1 ne sont pas premiers */
	{
		return (0);
	/* retourne 0 pour non premier */
	}
	return (_fonction_aux(n, 2));
	/* lance la vérification à partir de 2 */
}
