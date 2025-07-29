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
	int count;

	while (h != NULL)
	{

	count++;

	printf("%d\n", h->n);

	h = h->next;

	}
return (count);
}
