#include "main.h"

/**
 * cap_string - Met en majuscule la première lettre de chaque mot
 * @str: La chaîne à modifier
 *
 * Return: La chaîne modifiée avec des majuscules après séparateurs
 */

char *cap_string(char *str)
{
char separate[] = " \t\n,;.(){}!\"?";
/* Liste des séparateurs de mots */
int i = 0;
/* Index principal pour parcourir str */
int p = 0;
/* Index secondaire pour parcourir separate */

	if (str[0] >= 'a' && str[0] <= 'z')
	/* Si 1re lettre est minuscule */
		{
		str[0] -= 32;
		/* Convertir en majuscule */
		}
		for (; str[i] != '\0'; i++)
		/* Parcourir toute la chaîne */
			{
			for (p = 0; separate[p] != '\0'; p++)
			/* Vérifie chaque séparateur */
				{
				if (str[i] == separate[p])
				/* Si un séparateur est trouvé */
					{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						{
						str[i + 1] -= 32;
						/* Majuscule après séparateur */
						}
						break;
						/* Sort de la boucle dès qu'un match est trouvé */
					}
				}
			}
			return (str);
			/* Retourne la chaîne modifiée */
}
