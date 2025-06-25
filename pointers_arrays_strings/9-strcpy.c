#include "main.h"

/**
 *_strcpy - Copie la chaîne pointée par src y compris le caractère nul '\0',
 *          vers le tampon pointé par dest.
 * @dest: Pointeur vers le tableau dans lequel la chaîne sera copiée.
 * @src: Pointeur vers la chaîne source à copier.
 *
 * Return: Pointeur vers dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
/* Initialise un compteur i à 0 pour l'utilisation dans la boucle */
while (src[i] != '\0')
/* Parcourt chaque caractère de src jusqu'au caractère nul */
{
dest[i] = src[i];
/* Copie le caractère courant de src vers dest */
i++;
/* Incrémente l'indice pour passer au caractère suivant */
}
dest[i] = '\0';
/* Ajoute le caractère nul à la fin de la chaîne copiée */
return (dest);
/* Retourne le pointeur vers la destination */
}
