#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
	{
	return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
	return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
	close(file);
	free(buffer);
	return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_read != bytes_write)
	{
	close(file);
	free(buffer);
	return (0);
	}
	close(file);
	free(buffer);
	return (bytes_write);

}
