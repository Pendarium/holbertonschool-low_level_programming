#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères et d’un saut de ligne
 * @s: Chaîne de caractères à afficher
 * Return: Rien
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	/* Si on atteint la fin de la chaîne */
	{
		_putchar('\n');
		/* Affiche un saut de ligne */
		return;
		/* Termine la fonction */
	}
	_putchar(*s);
	/* Affiche le caractère courant */
	_puts_recursion(s + 1);
	/* Appelle la fonction pour le caractère suivant */
}
