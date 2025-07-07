#include "main.h"

/**
 * free_grid - libère une grille 2D allouée dynamiquement
 * @grid: grille à libérer
 * @height: nombre de lignes de la grille
 *
 * Description: Cette fonction libère chaque ligne de la grille puis
 * libère le tableau principal. Utilisée pour éviter les fuites mémoire
 * après utilisation d'une grille créée avec alloc_grid.
 *
 * Return: rien (void)
 */
void free_grid(int **grid, int height)
{
	int i; /* index pour parcourir les lignes */

	for (i = 0; i < height; i++)
		{
		free(grid[i]);
		/* libère chaque ligne */
		free(grid);
		/* libère le tableau principal */
		}
}
