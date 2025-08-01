#include "main.h"



int cp_file(const char *file_source, const char *file_destination)
{
	int file_cpy, file_past;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	file_cpy = open(file_source, O_RDONLY);
	if (file_cpy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_source);
		exit(98);
	}

	file_past = open(file_destination, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_past == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_destination);
		close(file_cpy);
		exit(99);
	}

	do
	{
		bytes_read = read(file_cpy, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_source);
			close(file_cpy);
			close(file_past);
			exit(98);
		}

		bytes_written = write(file_past, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_destination);
			close(file_cpy);
			close(file_past);
			exit(99);
		}

	} while (bytes_read > 0);

	if (close(file_cpy) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_cpy);
		exit(100);
	}

	if (close(file_past) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_past);
		exit(100);
	}

	return (0);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(av[1], av[2]);

	return (0);
}