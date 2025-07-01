#include "main.h"
/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères
 *                     de manière récursive
 * @s: pointeur vers la chaîne de caractères
 *
 * Return: longueur de la chaîne (sans compter le caractère nul)
 */

int _strlen_recursion(char *s)
/* Déclare une fonction qui calcule la longueur d'une chaîne */
{
	if (*s == '\0')
	/* Vérifie si on est arrivé à la fin de la chaîne */
	{
		return (0);
		/* Retourne 0 car aucun caractère restant */
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
		/* Ajoute 1 et appelle la fonction avec l'adresse suivante */
	}
}
