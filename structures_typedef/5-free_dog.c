#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour une structure dog_t
 * @d: Pointeur vers la structure à libérer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	free(d);
	/* Libère la mémoire (inutile ici car d est NULL) */
	return;
	/* Sort de la fonction si d est NULL */
	}
	free(d->owner);
	/* Libère la mémoire allouée pour le propriétaire */
	free(d->name);
	/* Libère la mémoire allouée pour le nom */
	free(d);
	/* Libère la mémoire de la structure principale */
}
