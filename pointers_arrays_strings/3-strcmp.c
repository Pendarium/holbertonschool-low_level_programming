#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Return: Une valeur négative si s1 < s2,
 *         0 si s1 == s2,
 *         une valeur positive si s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
/* Boucle tant que les caractères sont égaux et non terminés */
while (*s1 != '\0' && *s1 == *s2)
	{
	/* Avance dans les deux chaînes */
	s1++;
	s2++;
	}
/* Retourne la différence entre les caractères ASCII divergents */
	return (*s1 - *s2);
}
