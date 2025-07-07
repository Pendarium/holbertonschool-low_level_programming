#include "main.h"
/**
 * create_array - Crée un tableau de caractère initialisé avec un caractère
 * @size: la taille du tableau à allouer
 * @c: le caractère avec lequel initialiser le tableau
 *
 * Return: pointeur vers le tableau ou NULL si échec ou taille nulle
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	/* Allocation mémoire pour le tableau */
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	/* Remplir le tableau avec le caractère donné */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/* Retourner le pointeur vers le tableau */
	return (array);
}
