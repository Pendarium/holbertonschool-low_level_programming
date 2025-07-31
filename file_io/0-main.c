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
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
