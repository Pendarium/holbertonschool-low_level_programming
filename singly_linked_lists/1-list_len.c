#include "lists.h"

/**
 * list_len - Compte le nombre d'éléments dans une liste list_t
 * @h: Pointeur vers le début de la liste
 *
 * Description :
 * Parcourt chaque nœud de la liste chaînée et compte combien
 * il y a d’éléments (nœuds), sans les afficher.
 *
 * Return: Le nombre total de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	/* Compteur du nombre de nœuds */

	/* Parcours la liste jusqu'à la fin */
	while (h != NULL)
	{
		count++;
		/* Incrémente le compteur */
		h = h->next;
		/* Passe au nœud suivant */
	}

	return (count);
	/* Retourne le nombre total de nœuds */
}
