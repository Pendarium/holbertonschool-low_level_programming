#include "main.h"
/* Inclusion du fichier d'en-tête principal contenant les prototypes */

/**
 * reverse_array - Inverse les éléments d'un tableau d'entiers
 * @a: Pointeur vers le tableau d'entiers
 * @n: Nombre d'éléments dans le tableau
 */
void reverse_array(int *a, int n)
{
	int i;
	/* Variable pour l'index de boucle */
	int tmp;
	/* Variable temporaire pour l'échange des valeurs */

	for (i = 0; i < n / 2; i++)
	/* Parcourt la moitié du tableau pour l'inverser */
	{
		tmp = a[i];
		/* Stocke la valeur de l'élément courant */
		a[i] = a[n - i - 1];
		/* Affecte à l'élément courant la valeur symétrique depuis la fin */
		a[n - i - 1] = tmp;
		/* Place la valeur stockée dans la position symétrique */
	}
}

