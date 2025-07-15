#include "3-calc.h"

/**
 * op_add - additionne deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - soustrait deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: différence de a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplie deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divise deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: quotient de a et b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: reste de la division de a et b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
