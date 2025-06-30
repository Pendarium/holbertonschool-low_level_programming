#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
   int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
			if (s[i] == accept[j])
			{
				return(j + 2);
			}
			if (s[i] == '\0')
			{
				return (i);
			}
		}
	}
	return(i);
}