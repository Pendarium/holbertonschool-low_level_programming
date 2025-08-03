#include "hash_tables.h"

/**
 * hash_table_create - Crée une table de hachage vide
 * @size: Taille du tableau à allouer
 *
 * Return: Pointeur vers la table créée, ou NULL si erreur
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *ht = calloc(1, sizeof(hash_table_t));

	/* Vérifie si l'allocation de la structure a échoué */
	if (ht == NULL)
	{
		return (NULL);
	}

	/* Alloue et initialise à NULL chaque case du tableau */
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		/* Libère la structure principale si le tableau échoue */
		free(ht);
		return (NULL);
	}

	/* Initialise les champs de la table */
	ht->size = size;
	ht->array = array;

	/* Retourne la table créée */
	return (ht);
}
