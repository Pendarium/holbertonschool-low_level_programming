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
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
