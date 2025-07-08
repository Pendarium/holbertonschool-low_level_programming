#include"main.h"

/**
 * malloc_checked - Alloue de la mémoire dynamiquement
 * @b: taille en octets à allouer
 *
 * Description: Cette fonction alloue de la mémoire de
 *				taille 'b' à l'aide de malloc.
 * Si l'allocation échoue, le programme termine avec le code de sortie 98.
 *
 *
 * Return: un pointeur vers la mémoire allouée.
 */

void *malloc_checked(unsigned int b)
{
	int *size;
	/* Déclare un pointeur pour stocker l'adresse allouée */

	size = malloc(b);
	/* Alloue b octets de mémoire dynamiquement */

	if (size == NULL)
	/* Vérifie si l'allocation a échoué */

	{
		exit(98);
		/* Quitte le programme avec le code d'erreur 98 */
	}
	return (size);
	/* Retourne le pointeur vers la mémoire allouée */
}
