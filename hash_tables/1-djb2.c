#include "hash_tables.h"

/**
 * hash_djb2 - Calcule une valeur de hachage avec l’algorithme djb2
 * @str: Chaîne de caractères à hacher
 *
 * Return: La valeur de hachage obtenue
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Valeur initiale du hachage selon djb2 */
	hash = 5381;

	/* Parcours chaque caractère de la chaîne */
	while ((c = *str++))
	{
		/**
		 * Calcule le hachage :
		 * équivalent à hash = hash * 33 + c
		 * (hash << 5) + hash == hash * 32 + hash == hash * 33
		 */
		hash = ((hash << 5) + hash) + c;
	}

	/* Retourne la valeur finale de hachage */
	return (hash);
}
