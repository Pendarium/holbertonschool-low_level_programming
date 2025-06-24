#include "main.h"
/**
*_strlen - Entry point
* @s:jiohbvrf
*
*Écrivez une fonction qui imprime la table de multiplication par 9,
*en commençant par 0.
*
*return (0)
*/
int _strlen(char *s)
{
char *p;
    if (s == NULL)
        return 0;

    p = s;
    while (*p != '\0')  
        p++; 

    return p - s;
}
