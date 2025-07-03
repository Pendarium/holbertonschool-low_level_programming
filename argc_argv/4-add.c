#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc: nombre d'arguments
 * @argv: valeurs des arguments
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur
 */

int main(int argc, char *argv[])
{

	int index, check;
	/* index pour argv, check pour vérifier chaque char */
	int sum = 0;
	/* somme des entiers valides */

	for (index = 1; index < argc; index++)
	{
		for (check = 0; argv[index][check] != '\0'; check++)
		{
			if (!isdigit(argv[index][check]))
			{
				printf("Error\n");
				return (1);
				/* retourne 1 si un argument n'est pas un nombre */
			}
		}

		sum += atoi(argv[index]);
		/* ajoute l'entier converti à la somme */
	}

	printf("%d\n", sum);
	/* affiche la somme finale */

	return (0);
	/* fin normale du programme */
}
