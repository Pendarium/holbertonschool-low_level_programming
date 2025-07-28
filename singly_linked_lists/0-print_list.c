#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste chaînée.
 * @h: Pointeur vers le début de la liste.
 *
 * Description :
 * Parcourt chaque nœud de la liste et affiche la chaîne de caractères
 * stockée dans le nœud ainsi que sa longueur.
 * Si la chaîne est NULL, affiche "[0] (nil)".
 * Compte le nombre total de nœuds parcourus et retourne ce nombre.
 *
 * Return: Le nombre total d'éléments affichés.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	/* Pointeur temporaire pour parcourir la liste */
	size_t count = 0;
	/* Compteur du nombre de nœuds */

	/* Parcours la liste jusqu'à la fin */
	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u] %s\n",
				current->len, current->str);
		else
			printf("[0] (nil)\n");

		current = current->next;
		/* Passe au nœud suivant */
		count++;
		/* Incrémente le compteur */
	}

	return (count); /* Retourne le nombre total de nœuds */
}
