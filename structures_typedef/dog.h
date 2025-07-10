#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


struct dog
{
	char * name;
	float age;
	char * owner;
};

typedef struct dog dog_t;



#endif