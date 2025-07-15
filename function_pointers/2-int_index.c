#include "function_pointers.h"

/**
 * int_index - Cherche un élément dans un tableau avec une fonction cmp.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @cmp: Pointeur vers la fonction de comparaison.
 *
 * Description: Parcourt un tableau d'entiers et applique la fonction cmp.
 * Return: index du premier élément pour lequel cmp ne renvoie pas 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	/* Variable d'index pour parcourir le tableau */

	if (size == 0)
	/* Vérifie si la taille du tableau est nulle */
	return (-1);

	if (array == NULL)
	/* Vérifie si le pointeur du tableau est NULL */
	return (-1);

	if (cmp == NULL)
	/* Vérifie si le pointeur de fonction est NULL */
	return (-1);

	for (index = 0; index < size; index++)
	/* Parcourt le tableau du début à la fin */
	{
		if (cmp(array[index]) != 0)
		/* Si cmp retourne une valeur non nulle, élément trouvé */
			{
			return (index);
			/* Retourne l'index de l'élément trouvé */
			}
	}
	return (-1);
	/* Aucun élément ne correspond, retourne -1 */
}
