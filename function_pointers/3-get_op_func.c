/**
 * get_op_func - sélectionne la fonction correspondant à un opérateur donné
 * @s: chaîne contenant l'opérateur sous forme de chaîne de caractères
 *
 * Return: pointeur vers la fonction d'opération correspondante,
 *         ou NULL si l'opérateur n'est pas valide
 */

#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		/* addition */
		{"-", op_sub},
		/* soustraction */
		{"*", op_mul},
		/* multiplication */
		{"/", op_div},
		/* division */
		{"%", op_mod},
		/* modulo */
		{NULL, NULL}
		/* fin du tableau */
	};

	int i = 0;
	/* index de parcours */

	while (ops[i].op != NULL)
	/* tant que l'opérateur n'est pas NULL */
	{
		if (strcmp(ops[i].op, s) == 0)
		/* si correspondance trouvée */
			return (ops[i].f);
			/* retourne la fonction correspondante */
		i++;
	}

	return (NULL);
	/* opérateur non trouvé, retourne NULL */
}
