#include "main.h"

/**
 * _strpbrk - retourne un pointeur vers le premier caractère de s
 *            qui correspond à un caractère présent dans accept
 * @s: chaîne source à analyser
 * @accept: chaîne contenant les caractères à rechercher
 * Return: Retourne NULL si aucune correspondance n'est trouvée
 */

char *_strpbrk(char *s, char *accept)
{
int index;
	/* Variable pour parcourir la chaîne s */

int sec;
	/* Variable pour parcourir la chaîne accept */

for (index = 0; s[index] != '\0'; index++)
	/* Parcourt chaque caractère de s jusqu'à la fin */
{
	for (sec = 0; accept[sec] != '\0'; sec++)
		/* Parcourt chaque caractère de accept */
	{
		if (s[index] == accept[sec])
			/* Vérifie si un caractère de s est dans accept */
			return (&s[index]);
			/* Retourne l'adresse du premier caractère trouvé */
	}
}
return (NULL);
	/* Retourne NULL si aucune correspondance n'est trouvée */
}
