#include "lists.h"
/**
 * print_dlistint - Affiche tous les éléments
 *					d'une liste doublement chaînée.
 * @h: Pointeur constant vers le premier nœud de la liste dlistint_t
 *
 * Description: Cette fonction parcourt la liste à partir du nœud donné,
 *              affiche la valeur de chaque élément (champ n),
 *              et compte le nombre total de nœuds.
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	/* Initialise le compteur de nœuds à 0 */

	while (h != NULL)
	/* Tant qu'on n'est pas à la fin de la liste */
	{
		count++;
		/* Incrémente le compteur pour chaque nœud */

		printf("%d\n", h->n);
		/* Affiche la valeur entière contenue dans le nœud */

		h = h->next;
		/* Passe au nœud suivant */
	}

	return (count);
	/* Retourne le nombre total de nœuds parcourus */
}
