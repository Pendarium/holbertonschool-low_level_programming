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
