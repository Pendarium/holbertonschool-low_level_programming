#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d’un fichier
 * @filename: Nom du fichier dans lequel ajouter le texte
 * @text_content: Chaîne de caractères à ajouter à
 *				  la fin du fichier (peut être NULL)
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
 *         -1 si filename est NULL
 *         -1 si le fichier n’existe pas ou si
 *			 les permissions d’écriture sont insuffisantes
 *         1 si text_content est NULL et que le
 *			fichier existe (aucune écriture)
 *
 * Description: Cette fonction ouvre un fichier existant en mode écriture
 * avec ajout en fin de fichier (append). Elle n’en crée pas un nouveau.
 * Si text_content n’est pas NULL, son contenu
 * est ajouté à la fin du fichier.
 * Si text_content est NULL, aucune écriture
 * n’est faite, mais le succès est retourné
 * si le fichier a été ouvert correctement.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	written = write(file, text_content, len);

	if (written == -1 || (size_t)written != len)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
