#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: tableau 2D 8x8 contenant les caractères de l'échiquier
 *
 * Return: rien
 */

void print_chessboard(char (*a)[8])
{
	int index;
	/* Index pour parcourir les lignes */

	int num;
	/* Index pour parcourir les colonnes */

	for (index = 0; index < 8; index++)
		/* Parcourt chaque ligne de l'échiquier */
	{
		for (num = 0; num < 8; num++)
			/* Parcourt chaque colonne de la ligne */
		{
			printf("%c", a[index][num]);
			/* Affiche le caractère à la position actuelle */
		}
		printf("\n");
		/* Passe à la ligne suivante après chaque rangée */
	}
}
