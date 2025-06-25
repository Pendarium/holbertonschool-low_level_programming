#include "main.h"
/**
*print_array - entry
*@a:pzvieqoj,
*@n:pzvieqoj,
*Écrivez une fonction qui affiche la moitié d'une chaîne,
*suivie d'un saut de ligne.
*
*La fonction doit afficher la seconde moitié de la chaîne.
*Si le nombre de caractères est impair, la fonction doit
*afficher les n derniers caractères de la chaîne,
*où n = (length_of_the_string + 1) / 2
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
}
if (i < n - 1)
{
printf(", ");
}
printf("\n");
}
