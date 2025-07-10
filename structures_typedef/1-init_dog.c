#include "dog.h"

/**
 * init_dog - Initialise une structure de type struct dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Description : Cette fonction initialise les champs d'une structure
 * struct dog avec les valeurs données. Si le pointeur est NULL, rien
 * n'est fait.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
/* Vérifie si le pointeur est NULL, retourne sans rien faire */

d->name = name;
/* Affecte le nom du chien à la structure (à corriger pour être utile) */

d->age = age;
/* Affecte l'âge du chien à la structure (à corriger pour être utile) */

d->owner = owner;
/* Affecte le nom du propriétaire à la structure (à corriger aussi) */
}
}
