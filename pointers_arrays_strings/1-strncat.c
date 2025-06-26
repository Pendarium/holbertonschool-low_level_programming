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
