#include "main.h"

/**
*puts_half - entry
*@str:
*
*Écrivez une fonction qui affiche la moitié d'une chaîne,
*suivie d'un saut de ligne.
*
*La fonction doit afficher la seconde moitié de la chaîne.
*Si le nombre de caractères est impair, la fonction doit
*afficher les n derniers caractères de la chaîne,
*où n = (length_of_the_string + 1) / 2
*/

void puts_half(char *str)

{
int length = 0; /*longueur de la chaine de caratère*/
int index = 0;/*position sur la chaine de caractère*/
int half;/*moitier de la chaine*/

while (str[index++])
	length++;

/*verification si paire our impaire odd = size/2 +1*/
half = length / 2;

if ((length % 2) == 0)
	{
	half = length / 2;
	}
else
	{
	half = (length + 1) / 2;
	}

	/*sortie*/
for (index = half; index < length ; index++)
	{
	_putchar(str[index]);
	}
_putchar('\n');
}
