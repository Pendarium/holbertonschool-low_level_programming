#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * This function prints the key/value pairs in the hash table.
 * The output format is a list of key/value pairs,
 * where each pair is separated by a comma and a space.
 * The pairs are enclosed in curly braces.
 * If the hash table is empty, it prints an empty set of braces.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	/* Index pour parcourir le tableau de la table */
	int first;
	/* Indicateur pour la mise en forme (éviter la virgule initiale) */
	hash_node_t *node;
	/* Pointeur vers un nœud de la liste chaînée */

	/* Vérifie si la table de hachage est valide */
	if (ht == NULL)
		return;

	printf("{");
	first = 1;
	/* Au début, aucune paire n'a été affichée */

	/* Parcours chaque case du tableau */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		/* Récupère le premier nœud de la liste à cet index */

		/* Parcours la liste chaînée à cet index */
		while (node)
		{
			if (first == 0)
				printf(", ");
				/* Ajoute une virgule entre les paires */

			/* Affiche la paire clé-valeur au format requis */
			printf("'%s': '%s'", node->key, node->value);

			first = 0;
			/* Marque qu'au moins une paire a été affichée */
			node = node->next;
			/* Passe au nœud suivant */
		}
	}

	printf("}\n");
	/* Termine l'affichage */
}

