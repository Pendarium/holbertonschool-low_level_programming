#include "main.h"
/**
 * cp_file - Copies the contents of one file to another
 * @file_source: Path to the source file to copy from
 * @file_destination: Path to the destination file to copy to
 *
 * Return: 0 on success, -1 on failure
 */
int cp_file(const char *file_source, const char *file_destination)
{
	int file_cpy, file_past;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	/* Ouvre le fichier source en lecture seule */
	file_cpy = open(file_source, O_RDONLY);
	if (file_cpy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_source);
		exit(98);
	}

	/* Ouvre/crée le fichier destination en écriture, avec permissions 0664 */
	file_past = open(file_destination, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_past == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_destination);
		close(file_cpy);
		exit(99);
	}

	/* Lit le fichier source et écrit dans le fichier destination */
	while ((bytes_read = read(file_cpy, buffer, 1024)) > 0)
	{
		bytes_written = write(file_past, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_destination);
			close(file_cpy);
			close(file_past);
			exit(99);
		}
	}

	/* Vérifie si une erreur est survenue lors de la lecture */
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_source);
		close(file_cpy);
		close(file_past);
		exit(98);
	}

	/* Ferme le fichier source */
	if (close(file_cpy) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_cpy);
		exit(100);
	}

	/* Ferme le fichier destination */
	if (close(file_past) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_past);
		exit(100);
	}

	return (0);
}

/**
 * main - Entry point of the program
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	/* Vérifie que le programme a exactement 3 arguments (nom + 2 fichiers) */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Appelle la fonction pour copier le contenu du fichier source */
	cp_file(av[1], av[2]);

	return (0);
}
