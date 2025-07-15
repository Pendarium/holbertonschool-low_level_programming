/**
 * main - programme principal qui exécute une opération arithmétique
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau des arguments (num1 opérateur num2)
 *
 * Return: 0 en cas de succès, sinon termine avec un code d'erreur
 */

#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2;
	/* variables pour les nombres */
	int (*func)(int, int);
	/* pointeur vers la fonction d'opération */
	if (argc != 4)
	/* vérifie nombre d'arguments */
	{
		printf("Error\n");
		/* erreur si mauvais nombre d'args */
		exit(98);
		/* quitte avec code 98 */
	}
	num1 = atoi(argv[1]);
	/* convertit premier argument en int */
	num2 = atoi(argv[3]);
	/* convertit troisième argument en int */
	func = get_op_func(argv[2]);
	/* récupère la fonction correspondant à l'opérateur */
	if (func == NULL)
	/* si opérateur non valide */
	{
		printf("Error\n");
		/* affiche erreur */
		exit(99);
		/* quitte avec code 99 */
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	/* division ou modulo par zéro */
	{
		printf("Error\n");
		/* affiche erreur */
		exit(100);
		/* quitte avec code 100 */
	}
	printf("%d\n", func(num1, num2));
	/* affiche le résultat */
	return (0);
	/* fin du programme */
}
