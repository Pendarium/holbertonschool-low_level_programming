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
 * add_node_end - ajoute un nouveau nœud à la fin d'une liste chaînée
 * @head: pointeur vers le pointeur de la tête de la liste
 * @str: chaîne de caractères à dupliquer et stocker dans le nouveau nœud
 *
 * Description: Cette fonction crée un nouveau nœud avec une copie de la
 *              chaînepassée en paramètre, puis l'ajoute à
 *				la fin de la liste chaînée.
 *              Si la liste est vide, le nouveau nœud devient la tête.
 *              La fonction retourne l'adresse du nouveau nœud ou NULL si
 *              l'allocation échoue.
 *
 * Return: adresse du nouveau nœud ou NULL si échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new = strdup(str);
	/* Duplique la chaîne str et la stocke dans un nouvel emplacement mémoire */
	list_t *new_node;
	/* Déclare un pointeur pour le nouveau nœud */
	list_t *temp;
	/* Déclare un pointeur temporaire pour parcourir la liste */
	if (new == NULL)
		/* Vérifie si strdup a échoué */
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	/* Alloue de la mémoire pour un nouveau nœud */
	if (new_node == NULL)
		/* Vérifie si malloc a échoué */
		return (NULL);
	new_node->str = new;
	/* Assigne la chaîne dupliquée au champ str du nouveau nœud */
	new_node->len = _strlen(new);
	/* Assigne la longueur de la chaîne au champ len du nouveau nœud */
	new_node->next = NULL;
	/* Initialise le champ next à NULL, car ce sera le dernier nœud */
	if (*head == NULL)
	{
		*head = new_node;
		/* Si la liste est vide, le nouveau nœud devient la tête */
	}
	else
	{
		temp = *head;
		/* Initialise temp pour parcourir la liste depuis la tête */
		while (temp->next != NULL)
		{
			temp = temp->next;
			/* Avance jusqu’au dernier nœud de la liste */
		}

		temp->next = new_node;
		/* Attache le nouveau nœud à la fin de la liste */
	}
	return (new_node);
	/* Retourne l'adresse du nouveau nœud ajouté */
}
