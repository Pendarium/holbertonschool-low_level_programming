#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: double pointeur vers la tête de la liste doublement chaînée
 * @n: valeur entière à insérer dans le nouveau nœud
 *
 * Return: l'adresse du nouveau nœud, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/* Déclare un pointeur pour le nouveau nœud */

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/* Alloue de la mémoire pour un nouveau nœud */

	if (new_node == NULL)
	/* Vérifie si malloc a échoué */
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		/* Si la liste est vide, le nouveau nœud devient la tête */
		new_node->n = n;
		/* Initialise la valeur du champ n */
		new_node->next = NULL;
		/* Aucun nœud suivant car la liste était vide */
		new_node->prev = NULL;
		/* Aucun nœud précédent car c'est le premier */
	}
	else
	{
		new_node->n = n;
		/* Initialise la valeur du champ n */
		new_node->next = *head;
		/* Le champ next du nouveau nœud pointe vers l'ancienne tête */
		new_node->prev = NULL;
		/* Le champ prev du nouveau nœud est NULL puisqu'il sera le premier */
		(*head)->prev = new_node;
		/* L'ancien premier nœud pointe maintenant vers*/
		/*le nouveau nœud en tant que précédent */
		*head = new_node;
		/* Met à jour le pointeur de tête pour*/
		/*qu'il pointe vers le nouveau nœud */
	}

	return (new_node);
	/* Retourne l'adresse du nouveau nœud */
}
