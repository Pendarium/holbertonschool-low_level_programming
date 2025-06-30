#include "main.h"
/**
* _memset - Remplit un bloc de mémoire avec une valeur constante
* @s: pointeur vers la zone mémoire à remplir
* @b: valeur à utiliser pour remplir (octet constant)
* @n: nombre d'octets à remplir
*
* Return: pointeur vers la mémoire remplie (s)
*/
char *_memset(char *s, char b, unsigned int n)
/* Début de la fonction */
{
	unsigned int i;
	/* Déclaration d'un compteur pour la boucle */

	for (i = 0; i < n; i++)
	/* Boucle sur les n octets à remplir */
	{
		s[i] = b;
		/* Affecte la valeur b à l'octet i */
	}
	return (s);
	/* Retourne le pointeur vers la mémoire remplie */
}
