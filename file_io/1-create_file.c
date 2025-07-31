#include "main.h"

/**
 * create_file - Crée un fichier et y écrit une chaîne de caractères
 * @filename: Nom du fichier à créer
 * @text_content: Chaîne de caractères
 * à écrire dans le fichier (peut être NULL)
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 * (création ou écriture impossible)
 *
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;
	size_t len = 0;

	/* Vérifie si le nom de fichier est NULL */
	if (filename == NULL)
		return (-1); /* Échec si aucun nom de fichier n'est fourni */

	/* Ouvre le fichier en écriture seule, le crée*/
	/*s'il n'existe pas, et le tronque s'il existe */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Vérifie si l'ouverture du fichier a échoué */
	if (file == -1)
		return (-1); /* Échec si le fichier ne peut pas être ouvert ou créé */
	/* Si aucun contenu à écrire, on crée juste un fichier vide */
	if (text_content == NULL)
	{
		close(file);
		return (1); /* Succès : fichier vide créé */
	}
	/* Calcule la longueur de la chaîne à écrire */
	while (text_content[len] != '\0')
	{
		len++;
	}

	/* Écrit le contenu dans le fichier */
	written = write(file, text_content, len);
	/* Vérifie si l'écriture a échoué ou est incomplète */
	if (written == -1 || (size_t)written != len)
	{
		close(file);
		return (-1); /* Échec de l'écriture */
	}
	/* Ferme le fichier après l'écriture */
	close(file);
	/* Retourne 1 pour signaler le succès */
	return (1);
}
