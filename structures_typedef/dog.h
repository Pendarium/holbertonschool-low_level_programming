#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Structure qui décrit un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Nom du propriétaire du chien (chaîne de caractères)
 *
 * Description : Cette structure contient les informations de base
 * sur un chien : son nom, son âge et le nom de son propriétaire.
 * dog_t - Type défini comme un alias de la structure struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif
