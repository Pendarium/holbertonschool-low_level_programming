#include "main.h"

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments (non utilisé ici)
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(int argc, char *argv[])
	/* Fonction principale, prend le nb d'arguments et leurs valeurs */
{
	(void)argv;
	/* On ignore argv car il n'est pas utilisé ici */

	printf("%d\n", argc - 1);
	/* Affiche le nombre d'arguments (hors nom du programme) */

	return (0);
	/* Retourne 0 pour indiquer que le programme s'est bien terminé */
}