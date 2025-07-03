#include "main.h"
/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes
 *
 * Return: 0 si le programme s'exécute correctement
 */
int main(int argc, char *argv[])
/* Fonction principale avec les paramètres argc et argv */
{
	int total;
	/* Déclaration de la variable total pour le résultat */

	int un;
	/* Déclaration de la variable un (premier entier) */

	int deu;
	/* Déclaration de la variable deu (deuxième entier) */

	if (argc != 3)
	/* Vérifie si le nombre d'arguments est différent de 3 */
	{
		printf("Erreur\n");
		/* Affiche un message d'erreur */

		return (1);
		/* Retourne 1 pour indiquer une erreur */
	}

	un = atoi(argv[1]);
	/* Convertit le premier argument en entier */

	deu = atoi(argv[2]);
	/* Convertit le deuxième argument en entier */

	total = un * deu;
	/* Calcule le produit des deux entiers */

	printf("%d\n", total);
	/* Affiche le résultat du produit */

	return (0);
	/* Retourne 0 pour indiquer une exécution réussie */
}
