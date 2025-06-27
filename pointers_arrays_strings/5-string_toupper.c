#include "main.h"
/**
* string_toupper - Convertit toutes les lettres minuscules d’une chaîne
*
* @str: Pointeur vers la chaîne de caractères à convertir
*
* Return: Pointeur vers la chaîne convertie en majuscules
*/

char *string_toupper(char *str)
{
	int i = 0;
	/* Initialise l'indice à 0 */

	while (str[i] != '\0')
	/* Parcourt la chaîne jusqu'à la fin */
	{
		if (str[i] >= ('a') && str[i] <= 'z')
		/* Si caractère minuscule */
		{
			str[i] -= 32;
			/* Convertit en majuscule en soustrayant 32 */
		}
		i++;
		/* Passe au caractère suivant */
	}
	return (str);
	/* Retourne le pointeur vers la chaîne modifiée */
}
