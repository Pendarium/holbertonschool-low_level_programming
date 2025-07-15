#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction à chaque élément d'un tableau
 * @array: Pointeur vers le tableau d'entiers
 * @size: Taille du tableau
 * @action: Pointeur vers la fonction à appliquer à chaque élément
 *
 * Description: Parcourt un tableau d'entiers et applique la fonction
 * spécifiée à chaque élément. Fait rien si l'un des paramètres est NULL
 * ou si la taille est nulle.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
/* Fonction qui applique une action à chaque élément d'un tableau */
{
	unsigned int index; /* Variable d'index pour parcourir le tableau */

	if (array == NULL)
	/* Vérifie si le tableau est NULL pour éviter les erreurs */
	return;

	if (size == 0)
	/* Vérifie si la taille est nulle, dans ce cas rien à faire */
	return;

	if (action == NULL)
	/* Vérifie si le pointeur de fonction est NULL */
	return;

	for (index = 0; index < size; index++)
	/* Parcourt le tableau et applique l'action à chaque élément */
	action(array[index]);
	

}
