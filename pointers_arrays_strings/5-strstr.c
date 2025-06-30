#include "main.h"

char *_strstr(char *haystack, char *needle)

{
	while (*haystack)
	/* Tant qu'on n'atteint pas le \0 */
	{
		if (*haystack == *needle)
		/* Si le caractère courant est égal à c */
			return ((char *)haystack);
			/* On retourne un pointeur vers ce caractère */
	haystack++;
		/* Sinon on avance dans la chaîne */
	}
	if (*needle == '\0')
	/* Si on cherche le caractère nul */
		return ((char *)haystack);
		/* Retourne pointeur vers le \0 final */
	return (NULL);
	/* Si on ne trouve pas, retourne NULL */
}
