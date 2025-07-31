#include "main.h"

/**
 * create_file - Creates a file and writes content into it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure (e.g. if file can't be created or written)
 *
 * Description:
 * If the file exists, its content is truncated. If it doesn't exist, it's created
 * with permissions rw------- (0600). If filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;
	size_t len = 0;

	/* Vérifie si le nom de fichier est NULL */
	if (filename == NULL)
		return (-1);
		/* Retourne -1 si aucun nom de fichier fourni */

	/* Ouvre ou crée le fichier en écriture, tronque s'il existe, permissions rw------- */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Vérifie si l'ouverture du fichier a échoué */
	if (file == -1)
		return (-1);
		/* Retourne -1 en cas d'erreur à l'ouverture */

	/* Si text_content est NULL, créer un fichier vide */
	if (text_content == NULL)
	{
		close(file);
		return (1);
		/* Succès : fichier créé et vide */
	}

	/* Calcule la longueur de la chaîne text_content */
	while (text_content[len] != '\0')
	{
		len++;
	}

	/* Écrit le contenu dans le fichier */
	written = write(file, text_content, len);

	/* Vérifie si l'écriture a échoué ou partielle */
	if (written == -1 || (size_t)written != len)
	{
		close(file);
		return (-1);
		/* Retourne -1 en cas d'erreur d'écriture */
	}

	/* Ferme le fichier */
	close(file);

	/* Retourne 1 en cas de succès */
	return (1);
}
