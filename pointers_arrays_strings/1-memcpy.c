#include "main.h"

/**
 * _memcpy - Copie n octets depuis la source vers la destination
 * @dest: pointeur vers la zone de destination
 * @src: pointeur vers la zone source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers la mémoire remplie (s)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
/* Début de la fonction */
{
		unsigned int i;
	/* Déclaration d'un compteur pour la boucle */

	for (i = 0; i < n; i++)
	/* Boucle sur les n octets à copier */
	{
		dest[i] = src[i];
	/* Copie chaque octet de src vers dest */
	}
	return (dest);
	/* Retourne un pointeur vers la mémoire de destination */
}
