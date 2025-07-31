#include "main.h"

/**
 * read_textfile - A function that read a text file and prints it
 *				   to POSIX stdout
 *
 * @filename: The name of the file to be opened
 * @letters: The number of letters it could read and print
 *
 * Return: 0 if problem
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL) /* Vérifie si le nom de fichier est NULL */
	{
		return (0);
	} /* Aucun fichier fourni, on retourne 0 */
	/* Ouvre le fichier en lecture seule */
	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);/* Échec de l'ouverture du fichier */
	/* Alloue un buffer pour stocker les caractères lus */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);/* Libère le descripteur de fichier */
		return (0);
	} /* Échec de l'allocation mémoire */
	/* Lit jusqu'à 'letters' octets du fichier dans le buffer */
	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);/* Ferme le fichier en cas d'erreur */
		free(buffer);/* Libère la mémoire allouée */
		return (0);
	} /* Échec de la lecture */
	/* Écrit sur la sortie standard le contenu lu */
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_read != bytes_write)
	{
		close(file);/* Ferme le fichier */
		free(buffer);/* Libère le buffer */
		return (0);
	} /* Échec de l'écriture ou écriture partielle */

	close(file);/* Ferme le fichier après utilisation */
	free(buffer);/* Libère la mémoire allouée */
	/* Retourne le nombre d'octets écrits sur la sortie standard */
	return (bytes_write);
}
