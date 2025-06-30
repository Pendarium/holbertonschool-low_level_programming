#include "main.h"

/**
 * _strstr - cherche la première occurrence de needle dans haystack
 * @haystack: chaîne principale dans laquelle chercher
 * @needle: sous-chaîne à rechercher dans haystack
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si needle n'est pas trouvée dans haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	/* Index pour parcourir needle */

	if (*needle == '\0')
		/* Si needle est une chaîne vide, on retourne haystack */
		return (haystack);

	while (*haystack)
		/* Tant que le caractère courant de haystack n'est pas nul */
	{
		for (i = 0; needle[i]; i++)
			/* Parcourt needle tant que le caractère n'est pas nul */
		{
			if (haystack[i] != needle[i])
				/* Si les caractères ne correspondent pas, on arrête */
				break;
		}
		if (needle[i] == '\0')
			/* Si on a atteint la fin de needle, correspondance trouvée */
			return (haystack);
		haystack++;
		/* Passe au caractère suivant dans haystack */
	}
	return (NULL);
	/* Aucun match trouvé, on retourne NULL */
}
