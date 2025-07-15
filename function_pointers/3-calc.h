#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int op_add(int a, int b);
/* Addition */
int op_sub(int a, int b);
/* Soustraction */
int op_mul(int a, int b);
/* Multiplication */
int op_div(int a, int b);
/* Division */
int op_mod(int a, int b);
/* Modulo */
int (*get_op_func(char *s))(int, int);
/* Retourne la fonction associée à l'opérateur */

/**
 * struct op - structure associant un opérateur à une fonction
 *
 * @op: opérateur sous forme de chaîne
 * @f: pointeur vers fonction prenant deux int et retournant un int
 */
typedef struct op
{
	char *op;
	/* opérateur */
	int (*f)(int a, int b);
	/* fonction associée */
} op_t;

#endif
