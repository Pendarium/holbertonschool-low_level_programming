#include "main.h"
/**
 * alloc_grid - alloue une grille 2D de int et l'initialise à 0
 * @width: largeur de la grille
 * @height: hauteur de la grille
 *
 * Description: Cette fonction crée une grille 2D de dimensions width x height
 * alloue la mémoire nécessaire et initialise toutes les cases à 0.
 * Si width ou height est inférieur ou égal à 0, ou en cas d'échec
 * d'allocation mémoire, la fonction retourne NULL.
 *
 * Return: pointeur vers la grille allouée ou NULL si échec.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	/* pointeur vers la grille */
	int i;
	/* index ligne */
	int j;
	/* index colonne */
	int x = 0;
	/* index pour libération mémoire */

	if (width <= 0 || height <= 0)
		return (NULL);
		/* vérifie dimensions valides */
	grid = malloc(height * sizeof(int *));
	/* alloue tableau de pointeurs pour chaque ligne */
	if (grid == NULL)
		return (NULL);
		/* vérifie succès allocation */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/* alloue mémoire pour une ligne */
		if (grid[i] == NULL)
		{
			for (x = i - 1; x >= 0; x--)
			free(grid[x]);
			/* libère les lignes déjà allouées */
			free(grid);
			/* libère le tableau principal */
			return (NULL);
			/* retourne NULL en cas d'erreur */
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
			/* initialise chaque case à 0 */
		}
	}
	return (grid);
	/* retourne la grille initialisée */
}
