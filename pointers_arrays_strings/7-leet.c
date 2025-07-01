#include "main.h"

/**
 * leet - remplace certains caractères par des chiffres
 * @str: chaîne de caractères à modifier
 * 
 * Return: un pointeur vers la chaîne modifiée
 */
char *leet(char *str)
{
	int i;
	int j;
	char leetn[] = "aAeEoOtTlL";
	/* caractères à remplacer */
	char rep[] = "4433007711";
	/* chiffres de remplacement */

	for (i = 0; str[i] != '\0'; i++)
	/* parcourt chaque caractère de str */
	{
		for (j = 0; leetn[j] != '\0'; j++)
		/* parcourt les caractères à remplacer */
		{
			if (str[i] == leetn[j])
			/* si caractère trouvé dans leetn */
			{
				str[i] = rep[j];
				/* remplace par le chiffre correspondant */
			}
		}
	}

	return (str);
	/* retourne la chaîne modifiée */
}