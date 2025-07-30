#include "lists.h"
/**
 * dlistint_len - Affiche tous les éléments
 *					d'une liste doublement chaînée.
 * @h: Pointeur constant vers le premier nœud de la liste dlistint_t
 *
 * Description: Cette fonction parcourt la liste à partir du nœud donné,
 *              affiche la valeur de chaque élément (champ n),
 *              et compte le nombre total de nœuds.
 *
 * Return: Le nombre de nœuds dans la liste
 */

size_t dlistint_len(const dlistint_t *h)

{
	int count = 0;
	/* Initialise le compteur à 0 */

	while (h != NULL)
	/* Parcourt la liste jusqu'à ce que le pointeur soit NULL */
	{
		count++;
		/* Incrémente le compteur pour chaque nœud */
		h = h->next;
		/* Passe au nœud suivant */
	}

	return (count);
	/* Retourne le nombre total de nœuds */
}
