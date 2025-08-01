#include "main.h"

/**
 * main - Entry point of the program
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 *
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
