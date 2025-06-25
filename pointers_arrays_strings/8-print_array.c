#include "main.h"
/**
* print_array - Affiche les n premiers éléments d’un tableau d’entiers
* @a: pointeur vers le tableau d'entiers
* @n: nombre d'éléments du tableau à afficher
*
* Affiche les n premiers éléments du tableau séparés par des virgules
* et un espace, sauf après le dernier élément. Termine par un saut de ligne.
*/

void print_array(int *a, int n)
/* Définition de la fonction : */
/*prend un tableau d'entiers et le nombre d'éléments à afficher*/
{
int i;
/* Déclaration de la variable de boucle*/

for (i = 0; i < n; i++)
/* Boucle pour parcourir les n premiers éléments du tableau*/
{
printf("%d", a[i]);
/* Affiche l'élément i du tableau sans espace ni saut de ligne*/

if (i < n - 1)
/* Si ce n'est pas le dernier élément*/
{
printf(", ");
/*Affiche une virgule et un espace pour séparer les éléments*/
}
}
printf("\n");
/* Affiche un saut de ligne à la fin de l'affichage*/
}
