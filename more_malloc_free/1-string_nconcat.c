#include "main.h"
/**
 *_strncat -Copie la chaîne pointée par src y compris le caractère nul '\0',
 *          vers le tampon pointé par dest.
 * @dest: Pointeur vers le tableau dans lequel la chaîne sera copiée.
 * @src: Pointeur vers la chaîne source à copier.
 * @n: Pointeur vers la chaîne source à copier.
 *
 * Return: Pointeur vers dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
/* Initialise un compteur i à 0 pour l'utilisation dans la boucle */
while (dest[j] != '\0')
/* Parcourt chaque caractère de src jusqu'au caractère nul */
{
j++;
/* Incrémente l'indice pour passer au caractère suivant */
}
while (i < n && src[i] != 0)
/* Parcourt chaque caractère de src jusqu'au caractère nul */
{
dest[j] = src[i];
/* Copie le caractère courant de src vers dest */
i++;
j++;
/* Incrémente l'indice pour passer au caractère suivant */
}
dest[j] = '\0';
/* Ajoute le caractère nul à la fin de la chaîne copiée */
return (dest);
/* Retourne le pointeur vers la destination */
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
 * string_nconcat - Concatène s1 avec n caractères de s2
 * @s1: Première chaîne de caractères (peut être NULL)
 * @s2: Deuxième chaîne de caractères (peut être NULL)
 * @n: Nombre de caractères maximum à copier depuis s2
 *
 * Description: Alloue dynamiquement une nouvelle chaîne contenant s1
 * suivie des n premiers caractères de s2. Si s1 ou s2 est NULL, ils
 * sont traités comme des chaînes vides. Retourne un pointeur vers la
 * chaîne résultante, ou NULL si l'allocation échoue.
 *
 * Return: Pointeur vers la chaîne concaténée, ou NULL si erreur
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	size_t len1, len2;
	/* Déclaration du pointeur résultat et des longueurs */

	if (s1 == NULL)
	{
		s1 = "";
		/* Si s1 est NULL, le traiter comme chaîne vide */
	}

	if (s2 == NULL)
	{
		s2 = "";
		/* Si s2 est NULL, le traiter comme chaîne vide */
	}
	len1 = _strlen(s1);
	/* Calcul de la longueur de s1 */
	len2 = _strlen(s2);
	/* Calcul de la longueur de s2 */
	if (n >= len2)
		n = len2;
		/* Limite n à la longueur réelle de s2 si elle est plus petite */

	array = malloc(sizeof(char) * (len1 + n + 1));
	/* Allocation mémoire pour la chaîne concaténée + '\0' */

	if (array == NULL)
		return (NULL);
	/* Retourner NULL si l'allocation échoue */

	_strncpy(array, s1, _strlen(s1));
	/* Copier s1 dans array */
	_strncat(array, s2, n);
	/* Concaténer les n premiers caractères de s2 à array */

	return (array);
	/* Retourner le pointeur vers la chaîne résultante */
}
