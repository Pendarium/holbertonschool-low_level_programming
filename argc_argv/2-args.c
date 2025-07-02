#include "main.h"

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(int argc, char *argv[])
	/* Fonction principale, prend le nb d'arguments et leurs valeurs */
{
	int i;
	/* Déclaration de la variable i pour la boucle */

	for (i = 0; i < argc; i++)
	/* Boucle pour parcourir tous les arguments */
	{
		puts(argv[i]);
		printf("\n");
	/* Affiche chaque argument sur une ligne distincte */
	}
	return (0);
	/* Retourne 0 pour indiquer que le programme s'est bien terminé */
}
