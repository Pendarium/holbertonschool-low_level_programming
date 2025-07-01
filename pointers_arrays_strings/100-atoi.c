#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier
 * @s: chaîne à convertir en entier
 * Return: entier obtenu à partir de la chaîne
 */

int _atoi(char *s)

{
	int i = 0;
    /* Index pour parcourir la chaîne */
	unsigned int num = 0;
    /* Stocke la valeur numérique trouvée */
	int sign = 1;
    /* Signe du nombre (positif ou négatif) */
	int fnd_dig = 0;
    /* Indique si un chiffre a été trouvé */

	while (s[i] == ' ')
    /* Ignore les espaces au début de la chaîne */
	{
		i++;
        /* Passe au caractère suivant */
	}

	while (s[i] != '\0')
    /* Parcourt la chaîne jusqu'à la fin */
	{
		if (s[i] == '-')
        /* Vérifie si le caractère est un '-' */
		{
			sign *= -1;
            /* Change le signe du nombre */
		}
		if (s[i] >= '0' && s[i] <= '9')
        /* Si le caractère est un chiffre */
		{
			m = num * 10 + (s[i] - '0');nu
            /* Construit le nombre */
			fnd_dig = 1;
            /* Marque qu'un chiffre a été trouvé */
		}
		else if (fnd_dig)
        /* Si un chiffre a déjà été trouvé */
		{
			break;
            /* Arrête l'analyse à la première rupture */
		}

		i++;
        /* Passe au caractère suivant */
	}

	if (!fnd_dig)
    /* Si aucun chiffre n’a été trouvé */
		return (0);
        /* Retourne 0 */

	return (num * sign);
    /*Retourne le nombre avec le bon signe */
    
}


