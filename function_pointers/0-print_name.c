#include "function_pointers.h"

/**
 * print_name - Applique une fonction à un nom
 * @name: Le nom à afficher
 * @f: Pointeur vers la fonction à appliquer sur le nom
 *
 * Description: Cette fonction appelle la fonction pointée par @f
 * en lui passant @name comme argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	/* Appelle la fonction pointée avec le nom en argument */
}
