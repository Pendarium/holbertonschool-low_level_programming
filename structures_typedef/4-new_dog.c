#include "dog.h"
/* Inclusion du fichier d'en-tête principal */

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne (sans compter le caractère nul),
 *         ou 0 si le pointeur est NULL
 */

int _strlen(char *s)
/* Déclare une fonction qui retourne la longueur d'une chaîne */
{
char *p;
/* Déclare un pointeur pour parcourir la chaîne */

if (s == NULL)
/* Vérifie si le pointeur est NULL */
return (0);
/* Retourne 0 si le pointeur est NULL */

p = s;
/* Initialise p au début de la chaîne */

while (*p != '\0')
/* Boucle jusqu'à la fin de la chaîne */
p++;
/* Incrémente p pour parcourir chaque caractère */

return (p - s);
/* Retourne la différence entre p et s, soit la longueur */
}
/**
 * new_dog - Crée une nouvelle structure dog_t et initialise ses champs
 * @name: Nom du chien à copier
 * @age: Âge du chien
 * @owner: Nom du propriétaire à copier
 *
 * Description: Alloue dynamiquement une nouvelle structure dog_t,
 * copie les chaînes name et owner, et affecte l'âge.
 *
 * Return: Pointeur vers la nouvelle structure dog_t, ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *god;
	int i;

	god = (dog_t *)malloc(sizeof(dog_t));
	/* Allocation mémoire pour une structure dog_t */
	if (god == NULL)
	{
		return (NULL);	/* Retourne NULL si l'allocation a échoué */
	}
	god->name = (char *)malloc(_strlen(name) + 1);
	/* Allocation mémoire pour le nom du chien */
	if (god->name == NULL)
	{
		free(god);	/* Libère la mémoire allouée à la structure */
		return (NULL);/* Retourne NULL si l'allocation du nom a échoué */
	}
	else
	for (i = 0; i <= _strlen(name); i++)
	{
		god->name[i] = name[i];
	}
	/* Copie chaque caractère du nom dans la structure */
	god->owner = (char *)malloc(_strlen(owner) + 1);
	/* Allocation mémoire pour le nom du propriétaire */
	if (god->owner == NULL)
	{
		free(god->name);
		/* Libère la mémoire du nom si l'allocation du owner échoue */
		free(god);/* Libère la structure */
		return (NULL);
		/* Retourne NULL si l'allocation du owner a échoué */
	}
	else
	for (i = 0; i <= _strlen(owner); i++)
	{
		god->owner[i] = owner[i];
	}
	/* Copie chaque caractère du propriétaire dans la structure */
	god->age = age;/* Assigne l'âge du chien */
	return (god);/* Retourne un pointeur vers la nouvelle structure dog_t */
}
