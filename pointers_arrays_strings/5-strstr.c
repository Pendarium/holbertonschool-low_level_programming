#include "main.h"
/**
 * _strstr - Copie n octets depuis la source vers la destination
 * @haystack: pointeur vers la zone de destination
 * @needle: pointeur vers la zone source
 * @: nombre d'octets à copier
 *
 * Return: pointeur vers la mémoire remplie (s)
 */
char *_strstr(char *haystack, char *needle)

{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
