#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d’un fichier
 * @filename: Nom du fichier dans lequel ajouter le texte
 * @text_content: Chaîne de caractères à
 *				  ajouter à la fin du fichier (peut être NULL)
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;
	size_t len = 0;

	/* Vérifie si le nom du fichier est NULL */
	if (filename == NULL)
		return (-1);

	/* Ouvre le fichier en mode écriture et ajout, sans le créer */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	/* Si le contenu à ajouter est NULL,*/
	/*ne rien écrire et retourner le succès */
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	/* Calcule la longueur de la chaîne text_content */
	while (text_content[len] != '\0')
		len++;

	/* Écrit le contenu dans le fichier */
	written = write(file, text_content, len);

	/* Vérifie si l’écriture a échoué ou est incomplète */
	if (written == -1 || (size_t)written != len)
	{
		close(file);
		return (-1);
	}

	/* Ferme le fichier après l’écriture */
	close(file);

	/* Retourne 1 pour signaler le succès */
	return (1);
}
