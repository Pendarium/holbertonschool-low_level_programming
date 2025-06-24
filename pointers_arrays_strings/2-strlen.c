#include "main.h"
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne (sans compter le caractère nul),
 *         ou 0 si le pointeur est NULL
 */
int _strlen(char *s)
{
char *p;
if (s == NULL)
return (0);

p = s;
while (*p != '\0')
p++;
return (p - s);
}
