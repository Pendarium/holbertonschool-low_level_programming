#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de tous les éléments d'une dlistint_t
 * @head: pointeur vers le début de la liste doublement chaînée
 *
 * Return: la somme des éléments, ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	/* Initialisation de la somme */

	/* Parcours de la liste */
	while (head != NULL)
	{
		sum += head->n;
		/* Ajout de la valeur du nœud courant */
		head = head->next;
		/* Passage au nœud suivant */
	}

return (sum);
/* Retour de la somme totale */
}
