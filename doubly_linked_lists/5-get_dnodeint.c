#include "lists.h"

/**
 * get_dnodeint_at_index - Récupère le nœud
 * à un index donné dans une liste dlistint_t
 * @head: pointeur vers la tête de la liste
 * @index: position du nœud à récupérer (commence à 0)
 *
 * Return: pointeur vers le nœud à l’index donné,
 * ou NULL si l’index est hors limite
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
			/* On a trouvé le bon nœud */

		head = head->next;
		/* On avance dans la liste */
		count++;
	}

	return (NULL);
	/* L’index est plus grand que la taille de la liste */
}
