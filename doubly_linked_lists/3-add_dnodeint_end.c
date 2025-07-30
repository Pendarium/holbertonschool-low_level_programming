#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t
 * @head: double pointeur vers la tête de la liste
 * @n: valeur entière à insérer dans le nouveau nœud
 *
 * Return: l'adresse du nouveau nœud, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/* Déclare un pointeur pour le nouveau nœud */
	dlistint_t *temp;
	/* Déclare un pointeur temporaire pour parcourir la liste */

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
		new_node->prev = NULL;
		/* Aucun nœud précédent car c'est le premier de la liste */
		new_node->next = NULL;
		/* Aucun nœud suivant car c'est aussi le dernier */
	}
	else
	{
		temp = *head;
		/* Initialise temp pour parcourir la liste depuis la tête */
		while (temp->next != NULL)
		{
			temp = temp->next; }
			/* Avance jusqu’au dernier nœud de la liste */
		temp->next = new_node;
		/* Attache le nouveau nœud à la fin de la liste */
		new_node->next = NULL;
		/* Le nouveau nœud devient le dernier, donc next = NULL */
		new_node->prev = temp;
		/* Le nouveau nœud pointe vers l'ancien dernier nœud comme précédent */
		new_node->n = n;
		/* Initialise la valeur du champ n */
	}
	return (new_node);
	/* Retourne l'adresse du nouveau nœud ajouté */
}
