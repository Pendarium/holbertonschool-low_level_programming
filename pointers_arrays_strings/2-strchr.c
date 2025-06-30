#include "main.h"
/**
 * _strchr - Recherche la première occurrence dans une chaîne
 * @s: chaîne dans laquelle on cherche le caractère
 * @c: caractère à rechercher
 *
 * Return: pointeur vers la mémoire remplie (s)
 */
char *_strchr(char *s, char c)
{
	while (*s)
	/* Tant qu'on n'atteint pas le \0 */
	{
		if (*s == (char)c)
		/* Si le caractère courant est égal à c */
			return ((char *)s);
			/* On retourne un pointeur vers ce caractère */
		s++;
		/* Sinon on avance dans la chaîne */
	}
	if ((char)c == '\0')
	/* Si on cherche le caractère nul */
		return ((char *)s);
		/* Retourne pointeur vers le \0 final */
	return (NULL);
	/* Si on ne trouve pas, retourne NULL */
}
