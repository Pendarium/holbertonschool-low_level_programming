#include "main.h"
/**
* _strlen - Calcule la longueur d'une chaîne de caractères.
* @s: Pointeur vers la chaîne de caractères.
*
* Return: La longueur de la chaîne.
*/
int _strlen(char *s)
{
char *p;
if (s == NULL)
return (0);
p = s;
while (*p != '\0')
{
p++;
}
return (p - s);
}
/**
* rev_string - Inverse une chaîne de caractères
* @s: Pointeur vers la chaîne à inverser
*
* Cette fonction échange les caractères de la chaîne en place,
* du début vers la fin, pour obtenir la version inversée de la chaîne.
*/
void rev_string(char *s)
{
int left = 0;
int right = _strlen(s) - 1;
char tmp;
while (left < right)
{
tmp = s[left];
s[left] = s[right];
s[right] = tmp;
left++;
right--;
}
}
