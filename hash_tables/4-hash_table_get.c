#include "hash_tables.h"

/**
 * hash_table_get - Récupère la valeur associée à
 * une clé dans la table de hachage
 * @ht: Pointeur vers la table de hachage
 * @key: Clé dont on veut obtenir la valeur
 *
 * Return: La valeur associée à la clé, ou NULL si la clé n'existe pas
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	return (0);
	/*regarde les parametres*/

	index = key_index((const unsigned char *)key, ht->size);
	/*utilisation de la fonction key_index*/

	current = ht->array[index];
	/*parcour la liste chainé*/
	while (current != NULL)
	{
		/*si clé ok retourn valeur*/
		if (strcmp(current->key, key) == 0)
		return (current->value);
		current = current->next;
	}
return (NULL);
/*si clé non trouvé*/
}
