#include "main.h"

/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro
 * @nmemb: nombre d'éléments dans le tableau
 * @size: taille en octets de chaque élément
 *
 * Return: pointeur vers la mémoire allouée ou NULL si erreur
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *ptr;

	if (nmemb == 0)
	/* Vérifie que le nombre d'éléments n'est pas nul */
	return (NULL);

	if (size == 0)
	/* Vérifie que la taille de chaque élément n'est pas nulle */
	return (NULL);

	ptr = malloc(nmemb * size);
	/* Alloue la mémoire nécessaire pour le tableau */

	if (ptr == NULL)
	/* Vérifie si l'allocation mémoire a échoué */
	return (NULL);

	for (index = 0; index < (nmemb * size); index++)
	{
		ptr[index] = 0;
		/* Initialise chaque octet de la mémoire à zéro */
	}
	return (ptr);
	/* Retourne le pointeur vers la mémoire allouée */
}
