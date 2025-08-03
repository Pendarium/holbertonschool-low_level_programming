#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	/* Index pour parcourir le tableau de la table */
	hash_node_t *node;
	/* Pointeur vers un nœud de la liste chaînée */
	hash_node_t *tmp;
	/* Pointeur temporaire pour stocker le nœud suivant */

	/* Vérifie si la table de hachage existe */
	if (ht == NULL)
		return;

	/* Parcours chaque case du tableau */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		/* Récupère le premier nœud de la liste à cet index */

		/* Parcours la liste chaînée à cet index et libère chaque nœud */
		while (node)
		{
			tmp = node->next;
			/* Sauvegarde le pointeur vers le nœud suivant */
			free(node->value);
			/* Libère la valeur du nœud */
			free(node->key);
			/* Libère la clé du nœud */
			free(node);
			/* Libère le nœud lui-même */
			node = tmp;
			/* Passe au nœud suivant */
		}
	}

	/* Libère le tableau de pointeurs */
	free(ht->array);

	/* Libère la structure de la table de hachage */
	free(ht);
}
