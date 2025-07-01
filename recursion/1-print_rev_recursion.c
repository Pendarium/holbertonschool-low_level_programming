#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne en ordre inverse
 * @s: pointeur vers la chaîne de caractères
 * Return: rien (void)
 */

void _print_rev_recursion(char *s)
/* Déclaration de la fonction qui prend un pointeur de char*/
{
	if (*s > '\0')
	/*Vérifie si le caractère pointé n'est pas le caractère nul*/
	{
		_print_rev_recursion(s + 1);
		/*Appel récursif avec l'adresse du caractère suivant*/
		_putchar(*s);
		/*Affiche le caractère courant après l'appel récursif*/
	}

}
