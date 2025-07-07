#include "main.h"

/**
 * _strncpy - Copie au maximum n caractères d'une
 * chaîne source vers une chaîne destination
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: Nombre maximum de caractères à copier
 *
 * Return: Pointeur vers la chaîne de destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Déclaration de l'index de boucle */


for (i = 0 ; i < n && src[i] != '\0' ; i++)
/* Boucle pour copier les caractères de src vers dest*/
/*tant que i < n et src[i] n'est pas le caractère nul */
dest[i] = src[i];
/* Affectation du caractère courant de src à dest */


for ( ; i < n ; i++)
/* Remplir le reste de dest avec des caractères*/
/*nuls si src est plus court que n */
dest[i] = '\0';
/* Ajout d'un caractère nul à la position i de dest */

return (dest);
/* Retourne le pointeur vers la chaîne de destination */
}

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne (sans compter le caractère nul),
 *         ou 0 si le pointeur est NULL
 */

int _strlen(char *s)
/* Déclare une fonction qui retourne la longueur d'une chaîne */
{
char *p;
/* Déclare un pointeur pour parcourir la chaîne */

if (s == NULL)
/* Vérifie si le pointeur est NULL */
return (0);
/* Retourne 0 si le pointeur est NULL */

p = s;
/* Initialise p au début de la chaîne */

while (*p != '\0')
/* Boucle jusqu'à la fin de la chaîne */
p++;
/* Incrémente p pour parcourir chaque caractère */

return (p - s);
/* Retourne la différence entre p et s, soit la longueur */
}

/**
 * _strdup - Duplique une chaîne de caractères
 * @str: chaîne à dupliquer
 *
 * Retourne un pointeur vers une nouvelle chaîne allouée contenant une copie
 *de la chaîne passée en paramètre.Retourne NULL si allocation échoue ou si
 * str est NULL.
 *
 * Return: pointeur vers la copie, ou NULL en cas d'erreur
 */

char *_strdup(char *str)
{
	    char *copy = malloc(_strlen(str) + 1);
    /* Alloue de la mémoire pour la copie de str (+1 pour le '\0') */
	if (str == NULL)
		return (NULL);
	if (copy)
	_strncpy(copy, str, _strlen(str) + 1);
	/* Copie la chaîne str dans copy, y compris le caractère nul final */

	return (copy);
	/* Retourne le pointeur vers la copie, ou NULL si l'allocation a échoué */
}
