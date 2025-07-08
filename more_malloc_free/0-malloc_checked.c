#include"main.h"

void *malloc_checked(unsigned int b)
{
	int *size;

	size = malloc(b * sizeof(int));
	if (size == NULL)
	{
		exit(98);
	}
	return(size);

}
