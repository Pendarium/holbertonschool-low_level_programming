#include "main.h"
/* Inclusion du fichier d'en-tête principal */

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
