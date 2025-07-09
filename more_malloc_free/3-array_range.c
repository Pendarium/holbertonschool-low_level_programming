#include "main.h"

/**
 * array_range - Crée un tableau d'entiers de min à max inclus
 * @min: valeur minimale (incluse)
 * @max: valeur maximale (incluse)
 *
 * Return: pointeur vers le tableau ou NULL si erreur
 */

int *array_range(int min, int max)
{
	int size = (max - min + 1);
	/* Calcule le nombre total d'éléments dans le tableau */
	int index;
	int *ptr;

	if (min > max)
	/* Vérifie que min est inférieur ou égal à max */
	return (NULL);

	ptr = malloc(sizeof(int) * size);
	/* Alloue de la mémoire pour le tableau d'entiers */

	if (ptr == NULL)
	/* Vérifie si l'allocation mémoire a échoué */
	return (NULL);

	for (index = 0; index < size; index++)
	{
		ptr[index] = min;
		/* Remplit chaque case avec la valeur de min */
		min++;
		/* Incrémente min pour la valeur suivante */
	}

	return (ptr);
	/* Retourne le pointeur vers le tableau rempli */
}
