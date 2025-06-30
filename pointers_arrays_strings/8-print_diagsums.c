#include "main.h"

/**
 * print_diagsums - affiche la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers le début de la matrice (tableau 1D représentant une 2D)
 * @size: taille de la matrice (nombre de lignes/colonnes)
 *
 * Return: rien
 */

void print_diagsums(int *a, int size)
{
	int index = 0;
	/* Index pour parcourir la matrice */

	int multi1 = 0;
	/* Somme de la diagonale principale */

	int multi2 = 0;
	/* Somme de la diagonale secondaire */

	for (index = 0; index < size; index++)
		/* Parcourt chaque élément diagonal */
	{
		multi1 += a[index * size + index];
		/* Ajoute l'élément de la diagonale principale */

		multi2 += a[index * size + (size - 1 - index)];
		/* Ajoute l'élément de la diagonale secondaire */
	}
	printf("%d, %d\n", multi1, multi2);
	/* Affiche les sommes des deux diagonales */
}
