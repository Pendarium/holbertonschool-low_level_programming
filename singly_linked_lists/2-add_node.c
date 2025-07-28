#include "lists.h"


/**
 * _strlen - A custom function to calculate the length of a string
 *
 * @str: The string to calculate length for
 *
 * Return: The length of the string
 */
int _strlen(const char *str)
{
	int len = 0;
	/* Initialisation de la variable de comptage */

	while (*str)
	/* Boucle jusqu'à la fin de la chaîne (caractère nul '\0') */
	{
		len++;
		/* Incrémente la longueur pour chaque caractère */
		str++;
		/* Avance d’un caractère dans la chaîne */
	}

	return (len);
	/* Retourne la longueur totale */
}

/**
 * add_node - A function that add a new node at the beginning of a list
 *
 * @head: The beginning of hte list
 * @str: The string to add at the list
 *
 * Return: Pointer to the address of the new node (or NULL if failed)
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new = strdup(str);
	/* Duplique la chaîne str et la stocke dans un nouvel emplacement mémoire */
	list_t *new_node;
	/* Déclare un pointeur pour le nouveau nœud */

	if (new == NULL)
	/* Vérifie si strdup a échoué */
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	/* Alloue de la mémoire pour un nouveau nœud */

	if (new_node == NULL)
	/* Vérifie si malloc a échoué */
		return (NULL);

	new_node->str = new;
	/* Assigne la chaîne dupliquée au champ str du nœud */
	new_node->next = *head;
	/* Le nouveau nœud pointe vers l'ancienne tête de la liste */
	new_node->len = _strlen(str);
	/* Calcule et assigne la longueur de la chaîne */
	*head = new_node;
	/* Met à jour la tête de la liste avec le nouveau nœud */

	return (new_node);
	/* Retourne l'adresse du nouveau nœud */
}
