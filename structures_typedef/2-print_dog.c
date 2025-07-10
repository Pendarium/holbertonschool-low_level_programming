#include "dog.h"

/**
 * print_dog - Affiche le contenu d'une structure dog
 * @d: pointeur vers la structure à afficher
 *
 * Description : Cette fonction affiche le nom, l'âge et le propriétaire
 * d'un chien. Si un champ est NULL, elle affiche "(nil)" à la place.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	/* Vérifie si le pointeur est NULL, ne fait rien dans ce cas */
	return;
	/* Retourne immédiatement si le pointeur est NULL */

	if (d->name == NULL)
	/* Vérifie si le nom est NULL */
	{
	printf("Name: (nil)\n");
	/* Affiche (nil) si le nom n'existe pas */
	}
	else
	{
	printf("Name: %s\n", d->name);
	/* Affiche le nom du chien s'il est présent */
	}

	printf("Age: %f\n", d->age);
	/* Affiche l'âge du chien */

	if (d->owner == NULL)
	/* Vérifie si le propriétaire est NULL */
	{
	printf("Owner: (nil)\n");
	/* Affiche (nil) si le propriétaire est NULL */
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	/* Affiche le nom du propriétaire */
	}

}
