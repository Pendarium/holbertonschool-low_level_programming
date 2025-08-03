#include "hash_tables.h"

/**
 * hash_table_set - Ajoute ou met à jour un élément dans la table de hachage
 * @ht: Pointeur vers la table de hachage
 * @key: Clé à ajouter ou mettre à jour (ne peut pas être vide)
 * @value: Valeur associée à la clé (doit être dupliquée)
 *
 * Return: 1 si succès, 0 sinon
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;
	char *value_dup;

	/* Vérifications des paramètres */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value);/* Dupliquer la valeur */
	if (value_dup == NULL)
		return (0);
	/* Calculer l'index à partir de la clé */
	index = key_index((const unsigned char *)key, ht->size);
	/* Chercher si la clé existe déjà dans la liste à cet index */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)/*Si clé trouvée on remplace la valeur*/
		{
			free(current->value);
			current->value = value_dup;
			return (1); }
		current = current->next; }
	/* Clé non trouvée, on crée un nouveau nœud */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		return (0); }
	new_node->key = strdup(key);/* Dupliquer la clé */
	if (new_node->key == NULL)
	{
		free(value_dup);
		free(new_node);
		return (0); }
	new_node->value = value_dup;/* Initialiser le nouveau nœud */
	new_node->next = ht->array[index];
	/* Insérer en tête de la liste */
	ht->array[index] = new_node;

	return (1);
}
