#include "lists.h"

/**
 * free_list - Libère toute la mémoire allouée pour une liste chaînée
 * @head: Pointeur vers le début de la liste
 */

void free_list(list_t *head)
{
	list_t *temp;
	/* Déclare un pointeur temporaire pour stocker le nœud suivant */

	while (head != NULL)
	{
		temp = head->next;
		/* Sauvegarde l'adresse du nœud suivant */

		free(head->str);
		/* Libère la chaîne de caractères du nœud courant */

		free(head);
		/* Libère le nœud courant */

		head = temp;
		/* Passe au nœud suivant */
	}
}
