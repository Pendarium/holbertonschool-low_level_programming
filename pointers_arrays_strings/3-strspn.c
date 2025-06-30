#include "main.h"
/**
 * _strspn - retourne la longueur du préfixe de s composé uniquement
 *           de caractères présents dans accept
 * @s: chaîne source à analyser
 * @accept: chaîne contenant les caractères acceptés
 * Return: longueur du préfixe de s composé de caractères dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
int index;
	/* Variable pour parcourir la chaîne s */
int sec;
	/* Variable pour parcourir la chaîne accept */
int count = 0;
	/* Compteur du nombre de caractères du préfixe */
for (index = 0; s[index] != '\0'; index++)
	/* Parcourt chaque caractère de s jusqu'à la fin de la chaîne */
{
	int match = 0;
	/* Indique si une correspondance est trouvée dans accept */
	for (sec = 0; accept[sec] != '\0'; sec++)
		/* Parcourt chaque caractère de accept */
	{
		if (s[index] == accept[sec])
			/* Vérifie la correspondance entre s et accept */
		{
			match = 1;
			/* Marque qu'une correspondance est trouvée */
			break;
			/* Quitte la boucle une fois la correspondance trouvée */
		}
	}
	if (match)
		/* Si une correspondance est trouvée */
	{
		count++;
		/* Incrémente le compteur */
	}
	else
		/* Si aucune correspondance trouvée */
	{
		break;
		/* Quitte la boucle principale */
	}
}
return (count);
	/* Retourne la longueur du préfixe */
}
